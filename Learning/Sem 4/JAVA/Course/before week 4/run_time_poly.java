class A{
    void call(){
        System.out.println("I'm A");
    }
}
class B extends A{
    void call(){
        System.out.println("I'm B");
    }
}
class run_time_poly{
    public static void main(String[] args) {
        A a = new B();
        a.call();
        B b = new B();
        b.call();
    }
}