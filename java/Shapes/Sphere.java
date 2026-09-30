package Shapes;

public class Sphere {
    private Circle S1;

    public Sphere(double radius){
        S1 = new Circle(radius);
    }
    public double get_volume(){
        return (4/3)*Math.PI*S1.get_radius()*S1.get_radius()*S1.get_radius();
    }
}
