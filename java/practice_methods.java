public class practice_methods {
    static void multiplication(int n){
        for(int i = 1;i<=10;i++){
            System.out.format("%d X %d = %d\n", n , i , n*i);
        }
    }
    static void stars(int n){
        for(int i=0;i<n;i++){
            for(int j = 0;j<i+1;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    static int SumRec(int n){
        if(n==1){
            return 1;
        }
        return n + SumRec(n-1);
    }

    static void star2(int n){
        for(int i = n; i>=1;i--){
            for(int j = 1;j<=i;j++){
                System.out.print("*");
            }
            System.out.println();

        }
    }
    static int natural_num(int n){
        if(n==1){
            return 1;
        }
        return n + natural_num(n-1);
    }

    static void repeat(){
       System.out.println(4);
       repeat();
        
    }
    public static void main(String[] args) {
        //multiplication(20);
        // stars(300);
        // int c = SumRec(4);
        // System.out.println(c);
        // star2(4);
        // System.out.println(natural_num(5));
        repeat();
    }
}
