public class LiquidCrystal {

	private long self_ptr ;

	public LiquidCrystal() {
		this.init();
	};

	public native void init();
	public native void clear();
	public native void setCursor(int value, int line);
	public native int write(String str);
}
