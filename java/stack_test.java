public class stack_test {
  static int count = 0;

    static void repeat() {
        count++;
        repeat();
    }

    public static void main(String[] args) {
        try {
            repeat();
        } catch (StackOverflowError e) {
            System.out.println("Depth = " + count);
        }
    }
    
}
