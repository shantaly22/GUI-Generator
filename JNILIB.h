/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class JNILIB */

#ifndef _Included_JNILIB
#define _Included_JNILIB
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     JNILIB
 * Method:    createPM
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_JNILIB_createPM
  (JNIEnv *, jobject, jint);

/*
 * Class:     JNILIB
 * Method:    destroy
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JNILIB_destroy
  (JNIEnv *, jobject);

/*
 * Class:     JNILIB
 * Method:    parseFrom
 * Signature: (Ljava/lang/String;C)I
 */
JNIEXPORT jint JNICALL Java_JNILIB_parseFrom
  (JNIEnv *, jobject, jstring, jchar);

/*
 * Class:     JNILIB
 * Method:    manage
 * Signature: (Ljava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_JNILIB_manage
  (JNIEnv *, jobject, jstring, jint, jint);

/*
 * Class:     JNILIB
 * Method:    hasValue
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_JNILIB_hasValue
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JNILIB
 * Method:    getIntValue
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_JNILIB_getIntValue
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JNILIB
 * Method:    getDoubleValue
 * Signature: (Ljava/lang/String;)D
 */
JNIEXPORT jdouble JNICALL Java_JNILIB_getDoubleValue
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JNILIB
 * Method:    getBoolValue
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_JNILIB_getBoolValue
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JNILIB
 * Method:    getStrValue
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_JNILIB_getStrValue
  (JNIEnv *, jobject, jstring);

/*
 * Class:     JNILIB
 * Method:    getListValue
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_JNILIB_getListValue
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
