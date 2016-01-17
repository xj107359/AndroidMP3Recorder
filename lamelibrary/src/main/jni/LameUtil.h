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
 * Class:     com_czt_mp3recorder_util_LameUtil
 * Method:    init
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_com_czt_mp3recorder_util_LameUtil_init(JNIEnv *, jclass, jint, jint, jint, jint, jint);

/*
 * Class:     com_czt_mp3recorder_util_LameUtil
 * Method:    encode
 * Signature: ([S[SI[B)I
 */
JNIEXPORT jint JNICALL Java_com_czt_mp3recorder_util_LameUtil_encode(JNIEnv *, jclass, jshortArray, jshortArray, jint, jbyteArray);

/*
 * Class:     com_czt_mp3recorder_util_LameUtil
 * Method:    flush
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_com_czt_mp3recorder_util_LameUtil_flush(JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_czt_mp3recorder_util_LameUtil
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_czt_mp3recorder_util_LameUtil_close(JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif

#endif //ANDROIDMP3RECORDER_LAMEUTIL_H
