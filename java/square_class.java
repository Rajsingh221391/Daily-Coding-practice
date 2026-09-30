class rectangle{
    int length;
    int breadth;
    public int area(){
        return length*breadth;
    }
    public int perimeter(){
        return 2*(length+breadth);
    }
    
    
}

public class square_class {
 public static void main(String[] args) {
    rectangle S1=new rectangle();
    S1.length=4;
    S1.breadth=5;
    System.out.println(S1.area());
    System.out.println(S1.perimeter());
 }   
}
