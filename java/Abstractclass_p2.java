
interface Basic_animal{
    void eat();
    void sleep();
    
}



class monkey{
    public void jump(){
        System.out.println("jumping");
    }
    public void bite(){
        System.out.println("Biting");
    }
    public void eat(){
        System.out.println("Eating..");
    }
    public void sleep(){
        System.out.println("Sleeping..");
    }
}

class human extends monkey implements Basic_animal{
    void speak(){
        System.out.println("Hello Sir");
    }
}



public class Abstractclass_p2{
    public static void main(String[] args) {
        human H1 = new human();
        H1.sleep();
        H1.bite();
        H1.jump();
        H1.speak();

    }
}
