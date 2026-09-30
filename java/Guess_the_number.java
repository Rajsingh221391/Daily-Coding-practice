import java.util.Random;
import java.util.Scanner;
 class Game{

    private int RandomNumber;
    private int user_input;
    private int attempts;
    private int points;
    Scanner input = new Scanner(System.in);
// constructor
Game(){
    Random random = new Random();
    RandomNumber=random.nextInt(100)+1;
    attempts=0;
    points=100;
    System.out.println("=========================================");
    System.out.println(".       GUESS THE NUMBER GAME.      ");
    System.out.println("=========================================");
    System.out.println("Guess the number between 0 and 100");
    System.out.println("You start with 100 points");
    System.out.println("Each wrong guesses deducts your poimts.");
    System.out.println("If your final points are below 30 you lose.");
    System.out.println("==========================================");

}
// Taking user input
public void takingUserInput(){
    System.out.println("Enter your number:");
    user_input=input.nextInt();
}
// Checking whether the guess is correct:
public boolean isCorrectNumber(){
    attempts++;
    if(user_input>RandomNumber){
        System.out.println("TOO HIGH");
        points-=10;
    }
    else if(user_input<RandomNumber){
        System.out.println("TOO LOW");
        points-=10;
    }
    else{
        System.out.println("\n Congratulations");
        System.out.println("You guessed the number correctly.");
        return true;
    }
    System.out.println("Attempts"+attempts);
    System.out.println("Points remaining "+points);

    if(points<30){
        System.out.println("You points are less than 30");
        System.out.println("GAME OVER");
        System.out.println("The real number was"+RandomNumber);
        return true;
    }
    return false;
}

// Displaying final score;
public void displayScore(){
    System.out.println("==========RESULT==========");
    System.out.println("your attempts are: "+attempts);
    System.out.println("Your points are: "+points);

    if(points>=90){
        System.out.println("Your grade is S");
    }
    else if(points>=70){
        System.out.println("Your grade is A");

    }
    else if(points>=50){
        System.out.println("Your grade is C");

    }
    else{
        System.out.println("Your grade is C");
    }
}





 }
public class Guess_the_number {
    public static void main(String[] args) {
        /*
        create a class Game, which allows a user to play "Guess the number"
        game once.Game should have the following methods:
        1.Constructor to generate the random number 
        2.takeUserInput() to generate the random number.
        3.isCorrectNumber() to detect whether the entered by the user is true
        4
        
        */
        Game game = new Game();
        boolean gameOver = false;
        while(!gameOver){
            game.takingUserInput();
            gameOver=game.isCorrectNumber();
        }
        game.displayScore();



    }
    
}
