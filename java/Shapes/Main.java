package Shapes;

public class Main {
    public static void main(String[] args) {
        Sphere S1 = new Sphere(10);
        Circle c1 = new Circle(10);
        System.out.println(S1.get_volume());
        System.out.println(c1.area());
    }
}
