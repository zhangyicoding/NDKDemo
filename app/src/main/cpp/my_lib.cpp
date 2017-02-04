#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_estyle_ndkdemo_MainActivity_stringFromJNI(JNIEnv *env, jobject /* this */) {
    std::string hello = "Hello from jinpeixin";
    return env->NewStringUTF(hello.c_str());
}

//JNIEXPORT jstring JNICALL
//Java_com_estyle_ndkdemo_MainActivity_stringFromJNI(JNIEnv *env, jobject instance) {
//    std::string hello = "Hello from jinpeixin";
//    return env->NewStringUTF(hello.c_str());
//}