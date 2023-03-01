public class recursive_functions {
    int count,ff,i=0;

    int fact(int n1){
        if (n1 == 0){
            return 1;
        }
        else{
            return (n1 * fact(n1-1) );
        }
    }

    int fibo_func(int n){
        int f1 = 0;
        int f2 = 1;
        int f;
        System.out.print(f1 + "\t");
        System.out.print(f2 + "\t");
        for (int i = 0; i < (n-2); i++) {
            f = f1 + f2;
            f1 = f2;
            f2 = f;
            System.out.print((f + "\t")); 
        }
        return 0;
    }

    int fibo_recu(int f1, int f2){
        if (i == 0) {
            System.out.print(f1 + "\t");
            System.out.print(f2 + "\t");
        }
        else if( )
    }
    public static void main(String[] args) {
        recursive_functions f1 = new recursive_functions();
        System.out.println("The factorial series with 5  is " + f1.fact(5) );
        System.out.println("The fibonacci series with length 7  is " + (f1.fibo_func(7) ));        
    }    
}