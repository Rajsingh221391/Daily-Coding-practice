interface bicycle{
    void accelerating(int acceerates);
    void braking(int decelerating);
}

class hercules implements bicycle{
    int current_speed=7;
    public void accelerating(int accelerates){
        current_speed= current_speed+accelerates;
    }
    public void braking(int decelerating){
        current_speed=current_speed-decelerating;
    }

    void display(){
        System.out.println("current speed = "+ current_speed);
    }
}

public class Interfaces{
    public static void main(String[] args) {
        hercules h = new hercules();
        h.accelerating(6);
        h.display();
    }
}
  