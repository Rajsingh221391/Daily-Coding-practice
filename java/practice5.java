import java.util.Scanner;
public class practice5 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        // float Tax = 0;
        // System.out.println("Enter your income:");
        // float income = input.nextFloat();

        // if(income<=2.5){
        //    Tax = Tax + 0;

        // }
        // else if (income >= 2.5f && income<=5f) {
        //     Tax = Tax + 0.05f*(income - 2.5f);
            
        // }
        // else if (income>=5f && income<10.0f) {
        //     Tax = Tax + 0.05f*(5f-2.5f);
        //     Tax = Tax + 0.2f*(income - 5f);
        // }
        // else if (income>10.0f) {
        //     Tax = Tax + 0.05f*(5f-2.5f);
        //     Tax = Tax + 0.2f*(10.0f-5f);
        //     Tax = Tax + 0.3f*(income-10.0f);  
        // }
        // System.out.println("Your tax amount is:"+Tax);
        // input.close();
        

        //Question 4:
        int day = input.nextInt();
        switch (day) {
            case 1->System.out.println("Monday");
            case 5->System.out.println("Tuesday");
            case 6->System.out.println("wednesday");
            case 4->System.out.println("Thursday");
            case 2->System.out.println("Friday");
            case 3->System.out.println("Saturday");
            case 7->System.out.println("Sunday");
        }
        input.close();
    }
    
}
