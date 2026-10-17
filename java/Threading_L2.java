class newThread extends Thread 
{
    public void run()
    {
        for(int i=0;i<=5;i++)
        {
            System.out.println(Thread.currentThread().getName()+" is running "+i);
        }
    }    
}

public class Threading_L2 
{
    public static void main(String[] args) 
    {
        newThread t1 = new newThread();
        newThread t2 = new newThread();
        t1.start();
        t2.start();
    }
}
