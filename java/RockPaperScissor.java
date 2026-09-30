import java.util.Random;
import java.util.Scanner;
public class RockPaperScissor {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Random kuchbhi = new Random();
        
        System.out.println("--------------------------");
        System.out.println("Rock,Paper, Scissor game:");
        System.out.println("--------------------------");
        System.out.println("                          ");
        System.out.println("Enter your choices from Rock/Paper/Scissor:");
        String user_choice = input.nextLine().toLowerCase();

        String[] choices = {"rock","paper","scissor"};
        String computer_choices = choices[kuchbhi.nextInt(3)];
        System.out.println("You chose:" + user_choice );
        System.out.println("Computer chose:" + computer_choices );
        if(user_choice.equals(computer_choices)){
            System.out.println("It's a Draw!");

        }
        else if(user_choice.equals("rock") && computer_choices.equals("scissor") || 
        user_choice.equals("paper")&& computer_choices.equals("rock") || 
        user_choice.equals("scissor") && computer_choices.equals("paper"))
            {System.out.println("you win!");}
        else{
            System.out.println("Computer wins");
        }
        input.close();
    }
    
}
    