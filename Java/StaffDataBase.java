import java.util.*;

abstract class Staff
{
    String code;
    String name;
    Staff(String cd, String n)
    {
        code = cd;
        name = n;
    }
    abstract void display();
}

class Teacher extends Staff
{
    String subject;
    String publication;
    Teacher(String sb, String pb, String code, String name)
    {
        super(code,name);
        subject = sb;
        publication = pb;
    }
    void display()
    {
        System.out.println("Name: " + name);
        System.out.println("Code: " + code);
        System.out.println("Teacher subject: " + subject);
        System.out.println("Teacher publication: " + publication);
    }
}

class Typist extends Staff
{
    int speed;
    Typist(int sp, String code, String name)
    {
        super(code,name);
        speed = sp;
    }
    void display()
    {
        System.out.println("Name: " + name);
        System.out.println("Code: " + code);
        System.out.println("Writing speed: " + speed);
    }
}

class Officer extends Staff
{
    String grade;
    Officer(String gr, String code, String name)
    {
        super(code,name);
        grade = gr;
    }
    void display()
    {
        System.out.println("Name: " + name);
        System.out.println("Code: " + code);
        System.out.println("Grade: " + grade);
    }
}

class Regular extends Typist
{
    int salary;
    Regular(int s, int speed,String code, String name)
    {
        super(speed,code,name);
        salary = s;
    }
    void display()
    {
        System.out.println("Name: " + name);
        System.out.println("Code: " + code);
        System.out.println("Salary: " + salary);
    }
}

class Casual extends Typist
{
    int dailywage;
    Casual(int dw, int speed,String code, String name)
    {
        super(speed,code,name);
        dailywage = dw;
    }
    void display()
    {
        System.out.println("Name: " + name);
        System.out.println("Code: " + code);
        System.out.println("Daily Wage: " + dailywage);
    }
}

class StaffDataBase
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Name: ");
        String Sname = sc.nextLine();
        System.out.print("Enter code: ");
        String Scode = sc.nextLine();
        System.out.print("Enter choice\n1.Teacher\n2.Typist(Regular/Casual)\n3.Officer\nEnter choice here: ");
        int choice = sc.nextInt();
        while (choice < 5)
        {
            switch (choice)
            {
                case 1: System.out.print("Enter Teacher subject: ");
                        String Tsub = sc.next();
                        System.out.print("Enter Teacher Publication: ");
                        String Tpb = sc.next();
                        Teacher T1 = new Teacher(Tsub,Tpb,Scode,Sname);
                        T1.display();
                        System.out.println();
                        System.out.print("Enter choice(4 for exit): ");
                        choice = sc.nextInt();
                        break;

                case 2: System.out.print("Enter typing speed: ");
                        int Tspeed = sc.nextInt();
                        Typist T0 = new Typist(Tspeed,Scode,Sname);
                        T0.display();
                        System.out.println();
                        System.out.print("Enter choice\n1.Regular\n2.Casual\nEnter choice here: ");
                        int tchoice = sc.nextInt();
                        while (tchoice < 4)
                        {
                            switch (tchoice)
                            {
                                case 1: System.out.print("Enter salary: ");
                                        int Tsalary = sc.nextInt();
                                        Regular R1 = new Regular(Tsalary,Tspeed,Scode,Sname);
                                        R1.display();System.out.println();
                                        System.out.print("Enter choice: ");
                                        tchoice = sc.nextInt();
                                        break;
                                
                                case 2: System.out.print("Enter daily wage: ");
                                        int dwage = sc.nextInt();
                                        Casual C1 = new Casual(dwage,Tspeed,Scode,Sname);
                                        C1.display();
                                        System.out.println();
                                        System.out.print("Enter choice\n2.Casual\n3.Exit: ");
                                        tchoice = sc.nextInt();
                                        break;

                                case 3: break;
                                default : System.out.println("Invalid Choice!");
                            }
                            if (tchoice == 3)
                            {
                                break;
                            }
                        }
                        System.out.println();
                        System.out.print("Enter choice(4 for exit): ");
                        choice = sc.nextInt();
                        break;

                case 3: System.out.print("Enter Grade: ");
                        String Offgrade = sc.next();
                        Officer O1 = new Officer(Offgrade,Scode,Sname);
                        O1.display();
                        System.out.println();
                        System.out.print("Enter choice(4 for exit): ");
                        choice = sc.nextInt();
                        break;

                case 4: break;

                default: System.out.println("Invalid Choice!");
            }
            if (choice == 4)
            {
                break;
            }
        }
    }
}

