import java.util.Scanner;

public class Exception {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[5];
        for (int i=0; i<5; i++){
        try{
            System.out.print("Enter index: ");
            int index = sc.nextInt();
            System.out.print("ENter value: ");
            int val = sc.nextInt();
            arr[index] = val;
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Array Index out of bounds!");
            i--;
            return;
        }
        }
        for (int i=0; i<5; i++)
        {
            System.out.print(arr[i] + " ");
        }
    }
}
