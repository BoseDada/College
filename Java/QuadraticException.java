import java.util.*;
public class QuadraticException {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        double Dsq;
        Dsq = (b*b) - (4*a*c);

        try
        {
            if(Dsq < 0) throw new ArithmeticException("Equation gives imaginary roots!");
        }
        catch (ArithmeticException e)
        {
            System.out.println(Dsq);
        }
    }
}
