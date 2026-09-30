import java.util.Scanner;
public class practicechat2 {
    public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    // System.out.println("Enter your number:");
    int total = 0;
    int close=1;
    while(close>0){
    System.out.println("Enter your number:");
    int A = input.nextInt();
    if(A!=0){
        total = total + A;}
    else if(A==0){
        close = close*0;
    }
    }
    System.out.println("Your total accounts to"+total);
    input.close();

    }
    
}
    

