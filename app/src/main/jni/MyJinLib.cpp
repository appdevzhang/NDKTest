#include "com_appdevzhang_ndktest_NDKTest.h"

JNIEXPORT jstring JNICALL Java_com_appdevzhang_ndktest_NDKTest_getString(JNIEnv *e, jobject)

{

    return e->NewStringUTF("hello ndk !!！");

}