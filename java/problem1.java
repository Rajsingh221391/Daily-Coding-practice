package calc;

class calculator{
    public void calculate(int a,int b){
        System.out.println("Your result is"+ a+b);
    }
}
class sCalculator{
    public void calculate(int a , int b){
        System.out.println("your result is:"+ Math.sin(a+b));
    }
}

class MyCalculator{
    public void calculate(int a, int b){
        System.out.println("Your result is"+ a+b);
        System.out.println("Your result is:" + Math.sin(a+b));
    }
}



public class problem1 {

    public static void main(String[] args) {
        System.out.println("I am main method");
    }
}
