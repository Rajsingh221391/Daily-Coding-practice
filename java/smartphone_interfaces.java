interface camera{
    void take_snap();
    void record_video();
    private void greet(){
        System.out.println("Hello moto");
    }
    // Default method is used to implement an interface method in all subclass so as to not write it again.
    default void record4k(){
        System.out.println("Recording in 4k");
        greet();
    } 
    
}
interface wifi{
    String[] get_networks();
    void connect_network(String newtwork);
}
class cell_phone{
    void call_number(int phonenumber){
        System.out.println("Calling"+phonenumber);
    }
    void pick_number(){
        System.out.println("Connecting...");
    }
    
}

class MySmartphone extends cell_phone implements wifi,camera{

public void take_snap(){
        System.out.println("Taking picture");
    }

public void record_video(){
    System.out.println("taking video");
}


public String[] get_networks() {
System.out.println("getting networks");
String[] networklists={"Mac","Abhiraj's moto","iphone","Signature"};
    return networklists;
}
public void connect_network(String network){
    System.out.println("Connecting to "+network);
}
}


public class smartphone_interfaces {
    public static void main(String[] args) {
        MySmartphone ms = new MySmartphone();
        ms.record4k();
        ms.get_networks();
        ms.take_snap();
        ms.pick_number();
        ms.connect_network("Mac");
    //    String[] nets= ms.get_networks();
    //     for (String items : nets) {
    //         System.out.println(items);
            
    //     }
    }
}
