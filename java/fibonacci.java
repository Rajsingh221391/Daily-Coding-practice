public class fibonacci {
    static long series(int n){
        if(n==1)
            return 0;
        if(n==2)
            return 1;
        else{return series(n-1)+series(n-2);}

    }
    static double average(int... numbers) {

        int sum = 0;

        for(int i=0;i<=numbers.length-1;i++){
            sum=sum+numbers[i];
        }

        return (double) sum / numbers.length;
    }

    
    
    public static void main(String[] args) {
        // long result=series(10);
        // System.out.println(result);
        // for(int i=0;i<n;i++){
        //     System.out.print(series(i)+" ");
        // }
        System.out.println(average(5,5,5));

    }
    
}
