
class Test_LiquidCrystal {

    static {
      System.loadLibrary("LiquidCrystal_jni");
    }

    public static void main(String[] args) {
      LiquidCrystal lc = new LiquidCrystal();
      System.out.println("it works");
    }

}
