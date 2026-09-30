import java.util.Scanner;
public class practice2 {
    public static void main(String[] args) {
        Scanner name = new Scanner(System.in);
        System.out.println("Enter your name here:");
        String name1 = name.next();
        System.out.println("Hello " + name1 + " nice to meet you :)");
        System.out.println(name.hasNextInt());
        name.close();

    }
}
