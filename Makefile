all: run
.PHONY: all

JAVA_HOME=/usr/lib/jvm/java-8-openjdk-armhf

clean:
	rm -rf *.class *.so LiquidCrystal.h

LiquidCrystal.class: LiquidCrystal.java
	javac LiquidCrystal.java -h .

libLiquidCrystal_jni.so: LiquidCrystal.class
	g++ -shared -O3 -I/usr/include -I../ -I$(JAVA_HOME)/include -I$(JAVA_HOME)/include/linux LiquidCrystal.cpp -L.. -l:LiquidCrystal.so -lwiringPi -o libLiquidCrystal_jni.so

Test_LiquidCrystal.class: Test_LiquidCrystal.java libLiquidCrystal_jni.so
	javac Test_LiquidCrystal.java

run: Test_LiquidCrystal.class
	java -Djava.library.path=. Test_LiquidCrystal


