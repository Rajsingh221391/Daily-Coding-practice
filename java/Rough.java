import java.util.Scanner;
public class Rough {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Have you completed your Driving lessons?");
        String A = sc.next();
        System.out.println("Enter your age:");
        int B = sc.nextInt();
        if ("yes".equalsIgnoreCase(A) && B > 18){
            System.out.println("you are eligible.");
        }
        else if(!"yes".equalsIgnoreCase(A))
            {System.out.println("complete your driving");}
        
        else{System.out.println("you are a minor");}
        sc.close();
}
}
        

    

