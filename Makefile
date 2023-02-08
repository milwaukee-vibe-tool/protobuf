PROTOS = protos/*.proto
TARGETS = typescript

.PHONY: clean install install/$(TARGETS) build build/$(TARGETS)

clean:
	rm -r build

install: install/$(TARGETS)

install/typescript:
	npm install ts-proto

build: build/$(TARGETS)

build/typescript:
	@mkdir -p $@
	protoc --plugin=./node_modules/.bin/protoc-gen-ts_proto --ts_proto_out=$@ $(PROTOS)
