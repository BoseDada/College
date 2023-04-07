import java.util.Scanner;
import java.lang.Math;

class FloatingPoints {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        double a,b;
        System.out.print("Enter number: ");
        a = sc.nextDouble();
        System.out.print("Enter number: ");
        b = sc.nextDouble();
        a *= 1000;
        b *= 1000;
        a = Math.floor(a);
        b = Math.floor(b);
        if (a == b)
        {
            System.out.println("Equal upto 3 decimal places.");
        }
        else{
            System.out.println("Not equal");
        }
        sc.close();
    }
}
