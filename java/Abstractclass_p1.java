abstract class pen{
    abstract void write();
    abstract void refill();

}

class Fountain_pen extends pen{
    void write(){
        System.out.println("Writing with the pen.");
    }
    void refill(){
        System.out.println("Refilling the refill.");
    }
    void changeTip(){
        System.out.println("Changing the Tip of the pen.");
    }

}




public class Abstractclass_p1 {
    public static void main(String[] args) {
    Fountain_pen p = new Fountain_pen();
    p.write();
    p.refill();
    p.changeTip();
    }
    
}
