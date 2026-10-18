class NewThread extends Thread 
{
    private int delay;

    NewThread(int delay)
    {
        this.delay = delay;
    }
    public void run()
    {
        for(int i=0;i<=5;i++)
        {
            System.out.println(Thread.currentThread().getName() + " is running " + i);
            try
            {
                Thread.sleep(delay);
            }
            catch(InterruptedException e)
            {
                Thread.currentThread().interrupt();
                return;
            }
        }
    }    
}

public class Threading_L2 
{
    public static void main(String[] args) 
    {
        NewThread t1 = new NewThread(500);
        NewThread t2 = new NewThread(1000);
        t1.start();
        t2.start();
        try
        {
            t1.join();
            t2.join();
        }
        catch(InterruptedException e)
        {
            Thread.currentThread().interrupt();
            return;
        }
        System.out.println("Main finished");
    }
}
