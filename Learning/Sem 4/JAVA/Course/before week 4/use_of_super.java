class Point2d{
    static int x;
    static int y;
    String s = "Base";
    Point2d(){ 
        x = 0;
        y = 0;
        System.out.println("2d point created simple");
    }
    Point2d(int a, int b){ 
        x = a;
        y = b;
        System.out.println("2d point created parameter");
    }
    void disp(){
        System.out.println("Inside Point2d");
    }
}

class Point3d extends Point2d{
    int z;
    String s = "Derived";
    Point3d(){
        super();
        z = 0;
        System.out.println("3d point created");
    }
    Point3d(int c){
        //super();
        super(a,b);
        z = c;
    }
    void disp(){
        System.out.println("Inside Point3d");
    }
    // void invoke(){
    //     //super.disp();
    //     disp();
    // }
}

public class use_of_super {
    public static void main(String[] args) {
        //Point2d p1 = new Point2d();
        Point3d p2 = new Point3d();
        //System.out.println("x = "+p2.x+" y = "+p2.y+" z = "+p2.z);
        //p2.invoke();
    }
}
