 class employee{
    int salary;
    String name;
 public int getsalary(){
    return salary;
 }
 public String getname(){
    return name;
 }
 public void setname(String N){
    name=N;
 }
 public void setsalary(int S){
    salary=S;
 }
 public void print(){
    System.out.println("My name is "+name+",");
    System.out.println("and my salary is "+salary);
 }
}

/*class Square{
   int side;
   int perimeter;
   int area;
   public void side(int S){
       side=S;
   }
   public void set_area(int A){
      A=side;
      area=side*side;
      
   }
   public int area(){
    
    return side*side;
   
   }
   public void perimeter(int S1){
       perimeter=S1;
       perimeter=4*side;
   }
   public void output(){
      System.out.println("Your side is"+side);
      System.out.println("The perimeter of square of side "+side+" is "+perimeter+"cm");
      System.out.println("The area of square of side "+side+" is"+area+"cm^2");
   }
}*/



public class OOPS_practice {
    public static void main(String[] args) {
      /*  employee E1 = new employee();
        E1.setname("Raj");
        E1.setsalary(45000);
        E1.getname();
        E1.getsalary();
        E1.print();*/
        /*square S1 = new Square();
        S1.side(100);
        S1.perimeter(0);
        S1.set_area(0);
        S1.output();*/
    }
    
}
