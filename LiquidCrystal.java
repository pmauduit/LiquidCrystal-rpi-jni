public class LiquidCrystal {

	private long self_ptr ;

	public LiquidCrystal(int lcd_addr, int lcd_cols, int lcd_rows, int charsize) {
	  init(lcd_addr, lcd_cols, lcd_rows, charsize);
	};

	public native void init(int lcd_addr, int lcd_cols, int lcd_rows, int charsize);
	public native void clear();
	public native void home();
	public native void noDisplay();
	public native void display();
	public native void noBlink();
	public native void blink();
	public native void noCursor();
	public native void cursor();
	public native void scrollDisplayLeft();
	public native void scrollDisplayRight();
	public native void printLeft();
	public native void printRight();
	public native void leftToRight();
	public native void rightToLeft();
	public native void shiftIncrement();
	public native void shiftDecrement();
	public native void noBacklight();
	public native void backlight();
	public native void autoscroll();
	public native void noAutoscroll();
	public native void createChar(int value, int[] array);
	public native void setCursor(int value, int line);
	public native int write(int value);
	public native int write(String str);
	public native void command(int cmd);
	public native void setBacklight(int new_val);
	public native void load_custom_character(int char_num, int[] rows);
}
