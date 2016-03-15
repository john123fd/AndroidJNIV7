#include "zhanghuan_cn_jnitest1_MainActivity.h"

JNIEXPORT jstring JNICALL Java_zhanghuan_cn_jnitest1_MainActivity_getStringFromNative
  (JNIEnv * env, jobject job) {
  return (*env)->NewStringUTF(env, "Hello form JNI!");
}
