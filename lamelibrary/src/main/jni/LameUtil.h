//
// Created by xujun on 2016/1/17.
//

#ifndef ANDROIDMP3RECORDER_LAMEUTIL_H
#define ANDROIDMP3RECORDER_LAMEUTIL_H

#include <stdio.h>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cn_sopho_destiny_lamelibrary_util_LameUtil
 * Method:    init
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_cn_sopho_destiny_lamelibrary_util_LameUtil_init(JNIEnv *, jclass, jint, jint, jint, jint, jint);

/*
 * Class:     cn_sopho_destiny_lamelibrary_util_LameUtil
 * Method:    encode
 * Signature: ([S[SI[B)I
 */
JNIEXPORT jint JNICALL Java_cn_sopho_destiny_lamelibrary_util_LameUtil_encode(JNIEnv *, jclass, jshortArray, jshortArray, jint, jbyteArray);

/*
 * Class:     cn_sopho_destiny_lamelibrary_util_LameUtil
 * Method:    flush
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_cn_sopho_destiny_lamelibrary_util_LameUtil_flush(JNIEnv *, jclass, jbyteArray);

/*
 * Class:     cn_sopho_destiny_lamelibrary_util_LameUtil
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_cn_sopho_destiny_lamelibrary_util_LameUtil_close(JNIEnv *, jclass);

/*
 * Class:     cn_sopho_destiny_lamelibrary_util_LameUtil
 * Method:    getLameVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_cn_sopho_destiny_lamelibrary_util_LameUtil_getLameVersion
        (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif

#endif //ANDROIDMP3RECORDER_LAMEUTIL_H
