
interface sampleInterface{
    void meth1();
    void meth2();
    
}

interface child_of_sampleInterface extends sampleInterface{
    void meth3();
    
    void meth4();
 
}
class MySampleClass implements child_of_sampleInterface{
    @Override
    public void meth1() {
        System.out.println("invoking method 1");
        
    }
    @Override
    public void meth2() {
        System.out.println("invoking method 2");
        
    }
    
    @Override
    public void meth3() {
        System.out.println("invoking method 3");
        
    }
    @Override
    public void meth4() {
        System.out.println("invoking method 4");
        
    }
    
}

public class Inheritance_Inerfaces {
    public static void main(String[] args) {
        MySampleClass Ms = new MySampleClass();
        Ms.meth1();
    }
    
}
