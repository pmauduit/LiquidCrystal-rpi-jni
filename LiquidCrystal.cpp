#include "LiquidCrystal.h"
#include "LiquidCrystal_I2C.h"

LiquidCrystal_I2C * LCD = NULL; 

JNIEXPORT void JNICALL Java_LiquidCrystal_init(JNIEnv *, jobject) {
  if (LCD == NULL) { 
       LCD = new LiquidCrystal_I2C(0x27, 16, 2);
  }
  return;
}

/*
 * Class:     LiquidCrystal
 * Method:    clear
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_LiquidCrystal_clear(JNIEnv *, jobject) {
  if (LCD != NULL) {
      LCD->clear();
  }
  return;
}

/*
 * Class:     LiquidCrystal
 * Method:    setCursor
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_LiquidCrystal_setCursor(JNIEnv *, jobject, jint x, jint y) {
  if (LCD != NULL) {
    LCD->setCursor(x, y);
  }
  return;
}

/*
 * Class:     LiquidCrystal
 * Method:    write
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_LiquidCrystal_write(JNIEnv *env, jobject, jstring str) {
 int ret = 0;
 if (LCD != NULL) {
   const char *nativeString = env->GetStringUTFChars(str, 0);
   ret = LCD->write(nativeString);
   env->ReleaseStringUTFChars(str, nativeString);
 }
 return ret;
}
