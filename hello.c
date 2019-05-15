#include "jni.h"
#include <stdio.h>
#include "hello.h"
JNIEXPORT void JNICALL Java_hello_print(JNIEnv *, jobject){
    printf("hello C!\n")
}
