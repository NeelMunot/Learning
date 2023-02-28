class point{
    int x,y;

    void setpoint (int a, int b){
        x = a;
        y = b;
    }
    void disp(){
        System.out.println("x = " + x);
        System.out.println("x = " + y);
    }
}

public class ip_using_method{
    public static void main(String[] args) {
        point p1 = new point();
        p1.setpoint(9, 5);
        p1.disp();
    }
}