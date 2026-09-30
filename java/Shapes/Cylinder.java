package Shapes;

class Cylinder {
    private Circle base;
    private double height;

    public Cylinder(double radius, double height){
        base = new Circle(radius);
        this.height=height;
    }
    public double get_volume(){
        return base.get_radius()*base.get_radius()*Math.PI*height;
    }
}
