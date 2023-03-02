import java.util.*;

public class using_scanner_diff_data_type {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        System.out.println("Enter radius");
        double rad = cin.nextDouble();

        double area = 3.14 * rad * rad;

        System.out.println(area);
    }
}
