// private class ABCD{
//     private  int n1 = 0;
    
// }
// public class KLM{

//  }

class ABC{
    public int i = 555;
    protected void msg(){
        System.out.println("Hello Java! " + i);
    }
}
public class private_class extends ABC{
    public static void main(String[] args) {
        private_class obj = new private_class();
        obj.msg();
    }
}
