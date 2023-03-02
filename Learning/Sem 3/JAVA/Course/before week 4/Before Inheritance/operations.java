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

class rectangel {
    double x=0,y=0;

    double area(){
        return x*y;
    }
}

public class operations {
    public static void main(String[] args) {
        Circle c1 = new Circle();
        rectangel r1 = new rectangel();
        r1.x = 10;
        r1.y = 21;
        c1.r = 1.2;
        System.out.println("The area of circle is : " + c1.area());
        System.out.println("The area of rectangle is : " + r1.area());
    }
}
