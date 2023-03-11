interface I1 {
	public static final double PI = 3.1413424567;
	static final double lambda = 0.04;
	
	int x = 100;
	
	
	void methodI2();
}

class A1 implements I1 {

	public int a1 = 555;
	public void methodI1() {
		System.out.println("From I1 " + PI);
	}
	public void methodI2() {
		System.out.println("Again from I1 "
