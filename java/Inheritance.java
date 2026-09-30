class animal{
    public int age;
    
public void set_age(int age){
    this.age = 12;
}
public int get_age(){
    return age;
}
}
class dog extends animal{
    public String speak;


public void set_call(String speak){
    this.speak="BARK";
}
public String get_call(){
    return speak;
}


}



public class Inheritance {
    public static void main(String[] args) {
        dog d =new dog();
        d.set_age(12);
        System.out.println(d.get_age());
        d.set_call("BARK");
        System.out.println(d.get_call());
    }
}
