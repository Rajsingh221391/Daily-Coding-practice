class mythread extends Thread
{
    public void run()
    {
        System.out.println(Thread.currentThread().getName()+" is running");
    }
}

public class Threading_L1 
{
    public static void main(String[] args)
    {
        mythread m = new mythread();
        mythread m2 = new mythread();
        // m.run();
        m.start();
        m2.start();

        System.out.println("main is running");    
    }
}