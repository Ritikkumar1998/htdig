/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_sleepycat_db_Dbc */

#ifndef _Included_com_sleepycat_db_Dbc
#define _Included_com_sleepycat_db_Dbc
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_sleepycat_db_Dbc
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_Dbc_close
  (JNIEnv *, jobject);

/*
 * Class:     com_sleepycat_db_Dbc
 * Method:    del
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_sleepycat_db_Dbc_del
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_sleepycat_db_Dbc
 * Method:    finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_Dbc_finalize
  (JNIEnv *, jobject);

/*
 * Class:     com_sleepycat_db_Dbc
 * Method:    get
 * Signature: (Lcom/sleepycat/db/Dbt;Lcom/sleepycat/db/Dbt;I)I
 */
JNIEXPORT jint JNICALL Java_com_sleepycat_db_Dbc_get
  (JNIEnv *, jobject, jobject, jobject, jint);

/*
 * Class:     com_sleepycat_db_Dbc
 * Method:    put
 * Signature: (Lcom/sleepycat/db/Dbt;Lcom/sleepycat/db/Dbt;I)I
 */
JNIEXPORT jint JNICALL Java_com_sleepycat_db_Dbc_put
  (JNIEnv *, jobject, jobject, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
