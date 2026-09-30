class student{
    int roll_number;
    String name;
    int marks;
    public void details(){
        System.out.println("My name is "+name);
        System.out.println("and my roll number is "+roll_number+".");
        System.out.println("My marks in last semester was "+marks+"CGPA");
    }
}
public class custom_class{
    public static void main(String[] args) {
        System.out.println("This is our custom class.");
        student S1=new student();
        // Setting attributes.            
        S1.roll_number=1;
        S1.name="Raj";
        S1.marks=8;
        S1.details();
    }
}
