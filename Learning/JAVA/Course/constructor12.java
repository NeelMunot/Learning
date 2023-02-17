class Circle{
    double x,y,r;
    Circle (double a, double b, double c3){
        x = a;
        y = b;
        r = c3;
    }

    double area_of_circle(){
        return 3.14*r*r;
    }
}

public class constructor12 {
    public static void main(String[] args) {
        Circle c1 = new Circle(2,3,1);
        System.out.println("Area is " + c1.area_of_circle());
    }
}
