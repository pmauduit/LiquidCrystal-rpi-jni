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

  return;
}

/*
 * Class:     LiquidCrystal
 * Method:    setCursor
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_LiquidCrystal_setCursor(JNIEnv *, jobject, jint, jint) {


  return;
}

/*
 * Class:     LiquidCrystal
 * Method:    write
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_LiquidCrystal_write(JNIEnv *, jobject, jstring) {



}
