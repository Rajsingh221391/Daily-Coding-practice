import java.util.Scanner;
public class strings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your name:");
        String name = sc.nextLine();
        // System.out.println("Hello "+ name);
        // int value = name.length();
        // System.out.println(value);
        String newstring = name.toLowerCase();
        System.out.println(newstring);
        sc.close();
    }
}
