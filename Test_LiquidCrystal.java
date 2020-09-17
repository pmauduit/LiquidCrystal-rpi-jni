
class Test_LiquidCrystal {

    static {
      System.loadLibrary("LiquidCrystal_jni");
    }

    public static void main(String[] args) {
      LiquidCrystal lc = new LiquidCrystal();
      lc.setCursor(0,0);
      lc.write("Hello World");
      lc.setCursor(0,1);
      lc.write("    From Java");
      System.out.println("it works");
    }

}
