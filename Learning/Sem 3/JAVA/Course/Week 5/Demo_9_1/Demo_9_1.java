import myInterface.*;

class Demo_9_1 implements anInterface {
	public void display()
	{
		System.out.println("Fine!");
	}
	
	public static void main (String [] args) {
		Demo_9_1 t = new Demo_9_1();
		t.display();
		System.out.println("The final value a in myInterface " + a);
		}
}
