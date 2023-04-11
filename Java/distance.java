import java.util.*;

class distance
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int choice = 1;
        while (choice == 1)
        {
            System.out.print("Enter time: ");
            int time = sc.nextInt();
            System.out.print("Enter initial velocity: ");
            int velocity = sc.nextInt();
            System.out.print("Enter acceleration: ");
            int acc = sc.nextInt();
            System.out.print("Enter interval: ");
            int interval = sc.nextInt();
        
            while (time <= 100)
            {
                float dist = (velocity*time) + ((acc*time*time)/2);
                System.out.println("Distance travelled in " + time + " seconds is: " + dist);
                time += interval;
            }

            System.out.print("Do you want to continue?: ");
            choice = sc.nextInt();
        }
        sc.close();
    }
}

