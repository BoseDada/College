import java.util.*;
interface Shape
{
    public int area();
}

class Rectangle implements Shape
{
    public int area()
    {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int b = sc.nextInt();
        return l*b;
    }
}

class Cuboid implements Shape
{
    public int area()
    {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        return 2*((l*b)+(b*c)+(c*l));
    }
}

public class MinorQuestion {
    public static void main(String args[])
    {
        Rectangle R1 = new Rectangle();
        System.out.println(R1.area());
        Cuboid C1 = new Cuboid();
        System.out.println(C1.area());
    }
}
