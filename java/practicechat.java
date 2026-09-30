import java.util.Scanner;
public class practicechat {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter your Physics number:");
        int A = input.nextInt();
        System.out.println("Enter your Chemistry number:");
        int B = input.nextInt();
        System.out.println("Enter your Biology number:");
        int C = input.nextInt();
        // if(A<0){
        //     System.out.println("The number is negative");
        // }
        // else if(A==0){
        //     System.out.println("The number is 0");
        // }
        // else{System.out.println("The number is positive");}


        // problem 2:
    //     if(A>B && A>C){System.out.println("A is largest number");}
    //     else if(A<B && B>C){System.out.println("B is largest number");}
    //     else if(C>A && B<C){System.out.println("C is largest number");}
    //     else if(A==B && A==C){System.out.println("The numbers are equal.");}
     
            int sum = A + B + C;
            if(sum==720){
                System.out.println("Congrats you can get into AIIMS Delhi.");}
            else if(sum<720 && sum>700){
                System.out.println("You are eligible to get into AIIMS apart from AIIMS Delhi.");
            }
            else if(sum>650 && sum<700){
                System.out.println("You can get into top government college of choice apart from AIIMS.");
            }
            else if(sum>550 && sum<650){System.out.println("you can get into semi_government/low tier government colleges");}
            else if(sum>175 && sum<550){System.out.println("You can look for semi-government college if you have reservation.");}
            else if(sum<175){System.out.println("Cut-off not reached, you are not eligible for counselling");}
            else{System.out.println("Enter a valid input!");}
            input.close();
        }
    
}
