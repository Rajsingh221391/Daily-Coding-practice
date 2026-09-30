package Shapes;

public class Circle {
    private double radius;

    public Circle (double radius){
        this.radius=radius;
    }

    public void set_radius(double radius){
        this.radius=radius;
    }

    public double get_radius(){
        return radius;
    }
    public double area(){
        return Math.PI*radius*radius;
    }
}
