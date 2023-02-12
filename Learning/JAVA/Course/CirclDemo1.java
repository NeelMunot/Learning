class Circle {
    double x,y;
    double r;
    
    double circumference() {
        return 2*3.14*r;
    }
    double area() {
        return 3.14*r*r;
    }
}



public class CirclDemo1 {
    public static void main(String[] args) {
        Circle c1 = new Circle();
        c1.r = 1.2;
        System.out.println("The area of circle is : " + c1.area());
    }
}
