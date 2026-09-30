public class forloop {
    public static void main(String[] args) {
        for(int A = 0; A<=100; A=A+2 ){
            System.out.println("The number is"+ A);
            if(A==2){
                System.out.println("The loop ends here");
                continue;
            }
        }
    }
    
}
