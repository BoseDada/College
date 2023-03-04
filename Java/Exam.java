import java.util.*;

class Student
{
    Scanner sc = new Scanner(System.in);
    int rollno;
    void getrollno()
    {
        System.out.print("Enter rollno: ");
        rollno = sc.nextInt();
    }
    void putrollno()
    {
        System.out.println("Your rollno is: " + rollno);
    }
}
class Details extends Student
{
    String firstname;
    String lastname;                                                                                                                                                                                                                                                                                                
    void getname()
    {
        System.out.print("Enter first name: ");
        firstname = sc.nextLine();
        System.out.print("Enter last name: ");
        lastname = sc.nextLine();
    }
    void putname()
    {
        System.out.println("Name: " + firstname + " " + lastname);
    }
}

class Test extends Student
{
    int M1,M2;
    void getmarks()
    {
        System.out.print("Enter marks1: ");
        M1 = sc.nextInt();
        System.out.print("Enter marks2: ");
        M2 = sc.nextInt();
    }
    void putmarks()
    {
        System.out.println("Marks1: " + M1);
        System.out.println("Marks2: " + M2);
    }
}

interface Sports
{               
    double sportwt = 6.0;
    void putwt();
}

class Result extends Test implements Sports 
{
    double total;
    public void putwt()
    {
        System.out.println("Sports Weight: " + sportwt);
    }
    void display()
    {
        total = M1 + M2 + sportwt;
        System.out.println("Rollno.: " + rollno);
        System.out.println("Total Marks: " + total);
    }
}

class Exam
{
    public static void main(String args[])
    {
        Result R1 = new Result();
        Details D1 = new Details();
        D1.getname();
        D1.putname();
        R1.getrollno();
        R1.putrollno();
        R1.getmarks();
        R1.putmarks();
        R1.putwt();
        R1.display();
    }
}

