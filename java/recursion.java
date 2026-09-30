public class recursion {
    static long factorial(long n){
        if(n==0 || n==1){
            return 1;
        }
        else{
            return n * factorial(n-1);
        }
    }
    public static void main(String[] args) {
        long x = 5;
        long result = factorial(x);
        System.out.println(result);
    }
    
}
  