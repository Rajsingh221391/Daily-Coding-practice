class circle{
    public int radius;

    circle(int r){
        System.out.println("i am circle parameter constructor.");
        this.radius=r;
    }

    public double area(){
        return Math.PI*this.radius*this.radius;
    }

}

class cylinder1 extends circle{
    public int height;
    cylinder1(int r , int h){
        super(r);
        this.height=h;
    }

    public double volume(){
        return Math.PI*this.radius*this.radius*this.height;
    }


}



public class Exercise {
    public static void main(String[] args) {
        // circle obj = new circle(23);
        // System.out.println(obj.area());
        cylinder1 C2 = new cylinder1(23, 12);
       System.out.println( C2.volume());
    }
    
}
