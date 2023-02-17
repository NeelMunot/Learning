class Circle{
    double x,y,r;
    Circle (double x, double y, double r){
        this.x = x;
        this.y = y;
        this.r = r;
    }

    double area_of_circle(){
        return 3.14*r*r;
    }
}


public class this_pointer {
    public static void main(String[] args) {
        Circle c1 = new Circle(2,3,1);
        System.out.println("Area is " + c1.area_of_circle());
    }    
}
