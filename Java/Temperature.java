import java.util.Scanner;

class Temperature {
    public static void main(String args[])
    {
        int temp[][] = new int[10][31];
        Scanner sc = new Scanner(System.in);
        for (int i=0; i<5; i++)
        {
            for (int j=0; j<3; j++)
            {
                System.out.print("Enter temperature: ");
                temp[i][j] = sc.nextInt();
            }
        }
        for (int i=0; i<5; i++)
        {
            for (int j=0; j<3; j++)
            {
                System.out.print(temp[i][j] + " ");
            }
            System.out.println();
        }
        int max = temp[0][0];
        for (int i=0; i<5; i++)
        {
            for (int j=0; j<3; j++)
            {
                if (temp[i][j] > max) max = temp[i][j];
            }
        }
        for (int i=0; i<5; i++)
        {
            for (int j=0; j<3; j++)
            {
                if (max == temp[i][j])
                {
                    System.out.println("Maximum temperature is " + max + " degrees on day " + (j+1) + " in city " + (i+1));
                } 
            }
        }
        int min = temp[0][0];
        for (int i=0; i<5; i++)
        {
            for (int j=0; j<3; j++)
            {
                if (temp[i][j] < min) min = temp[i][j];
            }
        }
        for (int i=0; i<5; i++)
        {
            for (int j=0; j<3; j++)
            {
                if (min == temp[i][j])
                {
                    System.out.println("Minimum temperature is " + min + " degrees on day " + (j+1) + " in city " + (i+1));
                }
            }
        }
    }
}
