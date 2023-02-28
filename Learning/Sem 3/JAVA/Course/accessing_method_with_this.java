class A{
    void m(){
        System.out.println("Hello m");
    }
    void n(){
        System.out.println("Hello n");
        this.m();
    }
}
public class accessing_method_with_this {
    public static void main(String[] args) {
        A a  = new A();
        a.n();
    }
}
