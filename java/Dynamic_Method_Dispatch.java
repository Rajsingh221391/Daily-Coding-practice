class phone{
    public void on(){
        System.out.println("turning on phone.");

    }

}

class smartphone extends phone{
    public void on(){
        System.out.println("Turning on smartphone.");
    }

}


public class Dynamic_Method_Dispatch {
    public static void main(String[] args) {
        phone obj = new smartphone();
        obj.on();
    }
}
