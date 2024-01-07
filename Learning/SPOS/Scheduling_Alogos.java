import java.util.Scanner;

class Scheduling_Alogos{
    int n=10;
    int np;
    // char arr[np];
    int[] arr_a;
    int[] arr_b;

    void input_array(){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of processes: ");
        int np = scanner.nextInt();

        arr_a = new int[np];
        arr_b = new int[np];

        for (int i = 0; i < np; i++) {
            System.out.println("For Process P" +i);
            System.out.println("Enter Arrival Time:");
            arr_a[i] = scanner.nextInt();
            System.out.println("Enter Burst Time:");
            arr_b[i] = scanner.nextInt();
        }

        scanner.close();
    }

    void print_array(){
        for (int a: arr_a) {
            System.out.println(a);
        }
    }
    void fsfs(){
        int[] arr_ind_w8_time = new int[np];
        int temp = 0;
        arr_ind_w8_time[0] = 0; 
        for (int i = 1; i < arr_ind_w8_time.length; i++) {
            temp = temp + arr_b[i];
            arr_ind_w8_time[i] = temp;
        }
        System.out.println("The Average Wait time for ");
    }
    public static void main(String[] args) {

        Scheduling_Alogos obj1 = new Scheduling_Alogos();
        obj1.input_array();
        obj1.print_array();
        System.out.println("null");
    }
}