import java.util.Scanner;

class input_output{
    Scanner input = new Scanner(System.in);
    String A;

    public void input(){
        
        System.out.print("Enter your name:");
        
        A = input.nextLine();
    }
    public void display(){
        System.out.println("helloo "+ A);
    }
  
}


public class problem2 {
    public static void main(String[] args) {
       input_output I = new input_output();
       I.input();
       I.display();
    }
}
