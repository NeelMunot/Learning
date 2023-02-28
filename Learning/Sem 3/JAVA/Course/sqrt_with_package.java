// import java.lang.Math; 

// class Ans{
//     double n;
//     double r = Math.sqrt(n);
// }
// public class sqrt_with_package {
//     public static void main(String[] args) {
//         Ans a1 = new Ans();
//         a1.n = 16.0;
//         System.out.println("The Squareroot of 16 is " + a1.r);
//     }
// }

import java.lang.Math; 

class Ans{
    double n;
    double r;
    
    double root(){
        // r =  Math.sqrt(n);  these lines also give correct output
        // return r;

        return Math.sqrt(n);
    }
}
class sqrt_with_package {
    public static void main(String[] args) {
        Ans a1 = new Ans();
        a1.n = 16.0;  // a.i = Integer.parseInt(args[0])
        System.out.println("The Squareroot of 16 is " + a1.root());
    }
}
