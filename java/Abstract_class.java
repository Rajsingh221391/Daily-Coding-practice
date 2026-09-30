abstract class base2{
public base2(){
    System.out.println("I am a constructor of base2");
}

public void say_hi(){
    System.out.println("I am greeting.");
}

abstract public void greet();


}

class base1 extends base2{
public void greet(){
    System.out.println("I am greeting.");
}
}

public class Abstract_class {
    public static void main(String[] args) {
        base1 b = new base1();
        b.greet();
    }
}
