abstract class Bike{
    abstract void run();
}

class Honda extends Bike{
    void run() {
        System.out.println("Runs Safely ");
    }
    
}
public class abstract_class {
    public static void main(String[] args) {
        Bike obj = new Honda();
        obj.run();
    }
}
