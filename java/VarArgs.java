public class VarArgs {
    static  int sum(int...arr){
        int result = 0;
        for(int A : arr){
            result = result + A;
        }
        return result;
    }
    public static void main(String[] args) {
        System.out.println("The sum of the numebers is " + sum(4,5));

        
    }
    
    
}
