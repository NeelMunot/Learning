import java.util.Scanner;

public class using_scanner {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n1,n2;
        System.out.println("Enter n1 :");
        n1 = s.nextInt(); //n1 = 5
        System.out.println("Enter n2 :");
        n2 = s.nextInt(); // n2 = 7
        System.out.println("Sum = " + (n1+n2));  // (n1+ n2) = 12
        System.out.println("Sum = " + n1+n2);  // n1+ n2 = 12
    }   
}
 