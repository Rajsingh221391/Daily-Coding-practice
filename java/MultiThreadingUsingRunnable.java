class NewThread implements Runnable
{
    public void run()
    {
        System.out.println("Working....");
    }
}
public class MultiThreadingUsingRunnable
{
    public static void main(String[] args) 
    {
        NewThread n1 = new NewThread();
        Thread t1 = new Thread(() -> System.out.println("hello"));
        n1.run();
        t1.start();
    }
}