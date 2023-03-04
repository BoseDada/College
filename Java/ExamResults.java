import java.util.Scanner;

class ExamResults
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.print("Enter no. of students: ");
        n = sc.nextInt();
        int rollno[];
        rollno = new int[10];
        int m1[];
        m1 = new int[10];
        int m2[];
        m2 = new int[10];
        int m3[];
        m3 = new int[10];
        for (int i=0; i<n; i++)
        {
            System.out.print("Enter rollno: ");
            rollno[i] = sc.nextInt();
            System.out.print("Enter marks for sub 1: ");
            m1[i] = sc.nextInt();
            System.out.print("Enter marks for sub 2: ");
            m2[i] = sc.nextInt();
            System.out.print("Enter marks for sub 3: ");
            m3[i] = sc.nextInt();
        }
        System.out.println("Total marks obtained by each student: ");
        for (int i=0; i<n; i++)
        {
            System.out.println("Student " + (i+1) + " total marks: " + (m1[i] + m2[i] + m3[i]));
        }
        int max1 = m1[0];
        int max2 = m2[0];
        int max3 = m3[0];
        for (int i=0; i<n; i++)
        {
            if (m1[i] > max1) max1 = m1[i];
            if (m2[i] > max2) max2 = m2[i];
            if (m3[i] > max3) max3 = m3[i];

        }
        for (int i=0; i<n; i++)
        {
            if (max1 == m1[i])
            {
                System.out.println("Rollno.: " + rollno[i] + "\nMax marks in sub1: " + max1);
            }
            if (max2 == m2[i])
            {
                System.out.println("Rollno.: " + rollno[i] + "\nMax marks in sub2: " + max2);
            }
            if (max3 == m3[i])
            {
                System.out.println("Rollno.: " + rollno[i] + "\nMax marks in sub3: " + max3);
            }
        }
        int totalmarks[];
        totalmarks = new int[10];
        for (int i=0; i<n; i++)
        {
            totalmarks[i] = m1[i] + m2[i] + m3[i];
        }
        int maxtotal = totalmarks[0];
        for (int i=0; i<n; i++)
        {
            if (totalmarks[i] > maxtotal) maxtotal = totalmarks[i];
        }
        for (int i=0; i<n; i++)
        {
            if (maxtotal == totalmarks[i])
            {
                System.out.println("Rollno.: " + rollno[i] + "\nMax Total marks: " + maxtotal);
            }
        }
        sc.close();
    }
}