/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com4j_Win32Lock */

#ifndef _Included_com4j_Win32Lock
#define _Included_com4j_Win32Lock
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com4j_Win32Lock
 * Method:    closeHandle
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com4j_Win32Lock_closeHandle
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com4j_Win32Lock
 * Method:    createEvent
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com4j_Win32Lock_createEvent
  (JNIEnv *, jclass);

/*
 * Class:     com4j_Win32Lock
 * Method:    activate0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com4j_Win32Lock_activate0
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com4j_Win32Lock
 * Method:    suspend0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com4j_Win32Lock_suspend0
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com4j_Win32Lock
 * Method:    suspend1
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com4j_Win32Lock_suspend1
  (JNIEnv *, jclass, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif
