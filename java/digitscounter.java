import java.util.Scanner;

public class digitscounter {
    public static void main(String[] args) {
        Scanner Input = new Scanner(System.in);
        System.out.println("Enter your number:");
        int num = Input.nextInt();
        int temp = Math.abs(num);
        int count = 0;
        if(temp==0){
            count=1;
        }
        else{
            while(temp!=0){
                
                temp = temp/10;
                count++;
            }
        }

        System.out.println("The number of digits in the number"+num+" is "+count);
        Input.close();
    }
}
