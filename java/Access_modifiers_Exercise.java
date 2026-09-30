class cylinder{

private int height;
private int radius;
double volume;
double pi=3.14;

public void setRadius(int radius){
    this.radius=radius;
}

public int getRadius(){
    return radius;
}

public void setHeight(int height){
    this.height=height;
}

public int getHeight(){
    return height;
}

public void setVolume(){
 volume = pi*(radius*radius)*height;
}

public double getVolume(){
    return volume;
}
cylinder(int radius,int height){
    this.radius=radius;
    this.height=height;
    volume = pi*(radius*radius)*height;
    System.out.println("The volume of cyinder of height "+getHeight()+" and the radius of the cylinder is "+getRadius()+" the volume would be "+getVolume());
}

public void display(){
    // System.out.println(getRadius());
    // System.out.println(getHeight());
    
}




}


public class Access_modifiers_Exercise {
    

public static void main(String[] args) {
    
cylinder C1 = new cylinder(4,12);
// C1.setHeight(24);
// C1.setRadius(4);
// C1.setVolume();
// System.out.println(C1.getVolume());
C1.display();



}




}
