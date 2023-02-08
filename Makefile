BUILD_TARGETS = protos/*.proto
BUILD_DIR = build/$@

LANGS = typescript

.PHONY: all clean $(LANGS)

all: typescript

clean:
	rm -r build

install:
	mkdir install

install/$(LANGS): install
	npm install ts-proto
	@touch $@

build/$(LANGS):
	mkdir $@

typescript: $(BUILD_DIR)
	protoc --plugin=./node_modules/.bin/protoc-gen-ts_proto --ts_proto_out=$(BUILD_DIR) $(BUILD_TARGETS)
