all: run
.PHONY: all

clean:
	rm -rf *.class *.so LiquidCrystal.h

LiquidCrystal.class: LiquidCrystal.java
	javac LiquidCrystal.java -h .

libLiquidCrystal_jni.so: LiquidCrystal.class
	g++ -shared -O3 -I/usr/include -I$$JAVA_HOME/include LiquidCrystal.cpp -o libLiquidCrystal_jni.so

Test_LiquidCrystal.class: Test_LiquidCrystal.java libLiquidCrystal_jni.so
	javac Test_LiquidCrystal.java

run: Test_LiquidCrystal.class
	java -Djava.library.path=. Test_LiquidCrystal


