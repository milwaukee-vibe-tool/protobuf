/*
* reference: https://github.com/protobuf-c/protobuf-c/wiki/Examples
*/

#include <stdio.h>
#include <stdlib.h>
#include "protocol.pb-c.h"
#include "request.pb-c.h"
#include "response.pb-c.h"

int main (int argc, const char * argv[]) 
{
    //initialize objects
    Request request = REQUEST__INIT;
    Response response = RESPONSE__INIT;
    void *buf;                     // Buffer to store serialized data
    unsigned len;                  // Length of serialized data

    /*
    * serialize and deserialize
    */



    return 0;
}