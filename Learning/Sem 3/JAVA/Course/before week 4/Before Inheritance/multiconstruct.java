class Cube{
    double x,y,z;

    Cube()
    {
        x = 0.0;
        y = 0.0;
        x = 0.0;
    }
    Cube(double x, double y, double z){
        this.x = x;
        this.y = y;
        this.z = z;
    }
    Cube(Cube c){
        x = c.x;
        y = c.y;
        z = c.z;
    }
    double vol(){
        return x*y*z;
    }
}

public class multiconstruct {
    public static void main(String[] args) {
        Cube c1 = new Cube();
        Cube c2 = new Cube(1,3,8);
        Cube c3 = new Cube(c2);
        System.out.println("The volume of the box is " + c1.vol());
        System.out.println("The volume of the box is " + c2.vol());
        System.out.println("The volume of the box is " + c3.vol());
    }
}
