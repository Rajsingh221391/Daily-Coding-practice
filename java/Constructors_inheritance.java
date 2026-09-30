class Base1{

    Base1( ){
        System.out.println("I am a comstructor.");
    }
    
    Base1(int a){
        System.out.println("I an overloaded constructor of Base1.");
    }


}

class Derived_base extends Base1{
 Derived_base(){
    super(0);
    System.out.println("I am Derived_base's constructor.");
 }
}




public class Constructors_inheritance {
    public static void main(String[] args) {
        
        Derived_base D1 = new Derived_base();
        // D1.Derived_base();


    }
}
