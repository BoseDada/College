import java.util.*;
import java.lang.String;

class DeleteString
{
    public static String delete(String str, int m)
    {
        String str1 = str.substring(0, m-1);
        String str2 = str.substring(m, str.length());

        return str1 + str2;
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string: ");
        String str = sc.nextLine();
        System.out.print("Enter position: ");
        int m = sc.nextInt();

        System.out.println(delete(str,m));
        sc.close();
    }
}