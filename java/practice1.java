import java.util.Scanner;

public class practice1 {
    public static void main(String[] args) {
    Scanner marks = new Scanner(System.in);
    System.out.println("Enter your physics marks:");
    float Mark1 = marks.nextFloat();
    System.out.println("Enter your chemistry marks:");
    float Mark2 = marks.nextFloat();
    System.out.println("Enter your biology mark:");
    float Mark3 = marks.nextFloat();
    System.out.println("Enter your english marks:");
    float Mark4 = marks.nextFloat();
    System.out.println("enter your mathematics marks:");
    float Mark5 = marks.nextFloat();
    float percentage = ((Mark1+Mark2+Mark3+Mark4+Mark5)/500)*100;
    System.out.println("your percentage is:");
    System.out.println(percentage + "%");

        marks.close();
    }
    
}
