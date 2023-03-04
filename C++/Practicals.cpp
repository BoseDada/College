#include <iostream>
using namespace std;

//   *************** No. 1 ******************
/*
class Shape
{
    int length,width;
    float radius;

    public:

    Shape(int length,int width,float radius)
    {
        cout << "Perimeter of rectangle is: " << 2*(length+width) << endl;
        cout << "Circumference of Circle is: " << 2*3.14*radius << endl;
    };

    ~Shape()
    {
        cout << "Thank you" << endl;
    };

};

int main()
{
    Shape S1(2,5,7);
    return 0;
}
*/


//   ************* NO.2 *****************
/*
class Person
{
    char name1[64], name2[64];
    int age1, age2;
    char address1[64], address2[64];
    float totalSalary1, totalSalary2;
    int bsalary;

    public:
    
        void getPersonData() 
        {
            cout << "Enter the name: ";
            cin >> name1;
            cout << "Enter the age: ";
            cin >> age1;
            cout << "Enter the address: ";
            cin >> address1;
            cout << "\nEnter the name: ";
            cin >> name2;
            cout << "Enter the age: ";
            cin >> age2;
            cout << "Enter the address: ";
            cin >> address2;
           
        }
       void  displayPersonData()
        {
            cout << "\nThe name is: " << name1 << endl;
            cout << "The age is: " << age1 << endl;
            cout << "The address is: " << address1 << endl;
            cout << "The total salary is: " << totalSalary1 << endl;
            cout << "bsalary is: "<< bsalary <<endl;

            cout << "\nThe name is: " << name2 << endl;
            cout << "The age is: " << age2 << endl;
            cout << "The address is: " << address2 << endl;
            cout << "The total salary is: " << totalSalary2 << endl;
            cout << "bsalary is: "<< bsalary <<endl;
        }

        int computeSalary1()
        {
            if(age1 < 25)
            {
                totalSalary1 = 10000;
            }
            else if(age1 >= 25 && age1 <= 45)
            {
                totalSalary1 = 15000;
            }
            else
            {
                totalSalary1 = 20000;
            }
            cout << "The salary is: " << totalSalary1 << endl;
            return 0;
        }
            
        int computeSalary2()
        {
            if(age2 < 25)
            {
                totalSalary2 = 10000;
            }
            else if(age2 >= 25 && age2 <= 45)
            {
                totalSalary2 = 15000;
            }
            else
            {
                totalSalary2 = 20000;
            }
            cout << "The salary is: " << totalSalary2 << endl;
            return 0;
        }

        int compare() //inline function
        {
            if (totalSalary1 > totalSalary2)
            {
                cout << "The salary of " << name1 << " is greater than " << name2 << endl;
            }
            else if(totalSalary1 < totalSalary2)
            {
                cout << "The salary of " << name2 << " is greater than " << name1 << endl;
            }
            else
            {
                cout << "The salary of " << name1 << " is equal to " << name2 << endl;
                
            }
        return 0;
        }
        Person() //Constructor
        
        {
            bsalary = 1000;
        }
    
    void displayData();
       
};  
    void Person :: displayData()
    {
            cout <<"\nSalary Slip"<< endl;
            cout << "The name is: " << name1 << endl;
            cout << "The age is: " << age1 << endl;
            cout << "The address is: " << address1 << endl;
            cout << "The total salary is: " << totalSalary1 << endl;
            cout << "bsalary is: "<< bsalary <<endl;
                
            cout <<"\nSalary Slip"<< endl;
            cout << "The name is: " << name2 << endl;
            cout << "The age is: " << age2 << endl;
            cout << "The address is: " << address2 << endl;
            cout << "The total salary is: " << totalSalary2 << endl;
            cout << "bsalary is: "<< bsalary <<endl;
    }

int main()
{
    Person m; 
    m.getPersonData();
    m.computeSalary1();
    m.computeSalary2();
    m.displayPersonData();
    m.compare();
    m.displayData();
    
}
*/
//   *************** No. 3 *****************

/*
class Area
{
    int length,width;
    float radius;
    int base, height;
    public:

    int area(int length,int width)
    {
        return length*width;
    }

    int area(float radius)
    {
        return 3.14*radius*radius;
    }

    int area(float constant, int base, int height)
    {
        return constant * base * height;
    }


};

int main()
{
    float c = 0.5;
    Area A1;
    cout << "Area of rectangle: " << A1.area(5,4) << endl;
    cout << "Area of Circle: " << A1.area(7) << endl;
    cout << "Area of triangle: " << A1.area(c,4,5) << endl;
    return 0;
}
*/

//   ***************** No.4 ********************
// (a)
/*
class Swap
{
    int x,y;
    public: 
    friend void swapping(int x,int y);
};

void swapping(int x,int y)
{
    int temp = 0;
    temp=x;
    x=y;
    y=temp;
    cout << "Swapped first number: " << x << endl;
    cout << "Swapped second number: " << y << endl;
}


int main()
{
    int m,n;
    cout << "Enter 1st number: " ;
    cin >> m;
    cout << "Enter 2nd number: ";
    cin >> n;

    Swap S1;
    swapping(m,n);
    return 0;
}
*/

// (b)
/*
class DistF;
class DistM
{
    float m;
    float cm;
    public:
    void getdata();
    void display();
    friend DistM add(DistM x, DistF y);
};

class DistF
{
    int feet;
    int inches;
    public:
    void getdata();
    void display();
    friend DistM add(DistM x, DistF y);
};

void DistM :: getdata()
{
    cout << "Enter in meters: ";
    cin >> m;
    cout << "Enter in centimeters: ";
    cin >> cm;
}

void DistM :: display()
{
    cout << "Distance in meters: " << m << endl;
    cout << "Distance in centimeters: " << cm << endl;
}

void DistF :: getdata()
{
    cout << "Enter in feet: ";
    cin >> feet;
    cout << "Enter in inches: ";
    cin >> inches;
}

void DistF :: display()
{
    cout << "Distance in feet: " << feet << endl;
    cout << "Distance in inches: " << inches << endl;
}

DistM add (DistM x, DistF y)
{
    DistM temp;
    DistF temp1;

    temp.m = x.m + x.cm/100 + y.inches + 0.0254 + y.feet*0.3048;
    temp.cm = temp.m*100;

    temp1.feet = temp.m*3.2808;
    temp1.inches = temp.m*39.37;

    return temp;
}

int main()
{
    DistM a;
    a.getdata();
    DistF b;
    b.getdata();
    DistM c;

    c = add(a,b);
    c.display();

    return 0;
}
*/

//  ********************** No. 5 **********************
/*
class Student
{
    protected:
    int Rollno;
    char name[20];

    public: 
    void getdata()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Rollno: ";
        cin >> Rollno; 
    }
};

class Exam : public Student
{
    protected:
    int engmarks;
    int mathsmarks;
    int scmarks;
    int hindimarks;
    int sscmarks;
    int thlangmarks;

    public: 
    void getmarks()
    {
        cout << "Enter English marks: ";
        cin >> engmarks;
        cout << "Enter Maths marks: ";
        cin >> mathsmarks;
        cout << "Enter Science marks: ";
        cin >> scmarks;
        cout << "Enter Hindi marks: ";
        cin >> hindimarks;
        cout << "Enter SSC Marks: ";
        cin >> sscmarks;
        cout << "Enter 3rd lang marks: ";
        cin >> thlangmarks;
    }
};

class Result : public Exam
{
    protected: 
    int total;

    public: 
    void totalmarks()
    {
        total = engmarks + mathsmarks + scmarks + hindimarks + sscmarks + thlangmarks;
    } 
    void display();   
};

void Result :: display()
{
    cout << endl;
    cout << "Name of Student: " << name <<endl;
    cout << "Roll No.: " << Rollno << endl;
    cout << "English Marks: " << engmarks << endl;
    cout << "Maths Marks: " << mathsmarks << endl;
    cout << "Science Marks: " << scmarks << endl;
    cout << "Hindi Marks: " << hindimarks << endl;
    cout << "Social Science Marks: " << sscmarks << endl;
    cout << "Third Language marks: " << thlangmarks << endl;
    cout << "Grand Total: " << total << endl;

    if (total < 198)
    {
        cout << "Result : Fail" << endl;
    }
    else 
    {
        cout << "Result : Pass" << endl;
    }
}

int main()
{
    Result R1;
    R1.getdata();
    R1.getmarks();
    R1.totalmarks();
    R1.display();
    return 0;
}
*/


// ****************** No. 6 *************************
/*
class Measure
{
    int feet;
    int inch;
    public:
    Measure()
    {
        feet = 0;
        inch = 0;
    }
    Measure(int x, int y)
    {
        feet = x;
        inch = y;
    }
    
    void printadd()
    {
        cout << feet << " Feet and " << inch << " Inches." << endl;
    }

    Measure operator +(Measure d)
    {
        Measure temp;
        temp.feet = feet + d.feet;
        temp.inch = inch + d.inch;
        return temp;
    }

    int operator >(Measure d)
    {
        feet = feet + 0.083*inch;
        d.feet = d.feet + d.inch*0.083; 
        if (feet > d.feet) return 1;
        else return 0;
    }

    int operator <(Measure d)
    {
        feet = feet + 0.083*inch;
        d.feet = d.feet + d.inch*0.083; 
        if (feet < d.feet) return 1;
        else return 0;
    }

    int operator ==(Measure d)
    {
        feet = feet + 0.083*inch;
        d.feet = d.feet + d.inch*0.083; 
        if (feet == d.feet and inch == d.inch) return 1;
        else return 0;
    }

    Measure operator *(int n)
    {
        Measure temp;
        temp.feet = feet*n;
        temp.inch = inch*n;
        return temp;
    }

};

int main()
{
    int ft1,ft2,in1,in2;
    cout << "Enter feet for first: ";
    cin >> ft1;
    cout << "Enter inch for first: ";
    cin >> in1;
    cout << "Enter feet for second: ";
    cin >> ft2;
    cout << "Enter inches for second: ";
    cin >> in2;
    Measure D1(ft1,in1);
    Measure D2(ft2,in2);
    Measure D3;
    Measure D4;
    int choice;
    int n;
    cout << "Enter choice for\nAddition(1)\nComparison(><)(2)\nComparison(==)(3)\nMultiply with integer(4)\nExit(5)Enter choice: ";
    cin >> choice;
    switch (choice)
    {
        case 1: D3 = D1 + D2;
                D3.printadd();
                break;

        case 2: if (D1<D2) cout << "D1 is less than D2" << endl;
                else if (D1>D2) cout << "D1 is greater than D2" << endl;
                break;

        case 3: if (D1==D2) cout << "D1 is equal to D2" << endl;
                else cout << "Not same" << endl;
                break;

        case 4: cout << "Enter integer: ";
                cin >> n;
                D3 = D1*n;
                D4 = D2*n;
                D3.printadd();
                D4.printadd();
                break;

        case 5: break;
        default: cout << "Invalid choice!" << endl;
    }
    return 0;
}
*/

//    ************* No. 7 ********************
/*
class A
{
    int a;
    int b;
public:
    void set(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void show()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    A obj;
    obj.set(10, 20);
    obj.show();
    return 0;
}
*/

// ************************ No. 8 ********************
/*
class Media
{
    protected:
    char title[30];
    char publication[30];

    public:
    virtual void read() = 0;
    virtual void show() = 0;
};

class Book : public Media
{
    int pages;
    public: 
    void read();
    void show();
};

class Tape : public Media
{
    int time;
    public:
    void read();
    void show();

};

void Book :: read()
{
    cout << "\nEnter title of book: ";
    cin >> title;
    cout << "Enter publication: ";
    cin >> publication;
    cout << "Enter pages: ";
    cin >> pages;
}

void Book :: show()
{
    cout << "\nBook Deatils: ";
    cout << "\nTitle: " << title;
    cout << "\nPublication: " << publication;
    cout << "\nPages: " << pages;
}

void Tape :: read()
{
    cout << "\nEnter title of tape: ";
    cin >> title;
    cout << "Enter publication: ";
    cin >> publication;
    cout << "Enter playing time(seconds): ";
    cin >> time;
}

void Tape :: show()
{
    cout << "\nTape Details: ";
    cout << "\nTitle: " << title;
    cout << "\nPublication: " << publication;
    cout << "\nPlaying time: " << time;
}

int main()
{
    Media *p;
    int i=1, choice;
    Book b;
    Tape t;
    do
    {
        cout << "\n\nEnter your choice: 1.Book 2.Tape 3.Exit: ";
        cin >> choice;
        switch (choice)
        {
            case 1: p = &b;
                    p->read();
                    p->show();
                    break;
            
            case 2: p = &t;
                    p->read();
                    p->show();
                    break;

            case 3: i = 0;
                    break;

            default: cout << "Invalid choice!"; 
        }
    } while (i);

    return 0;
    
}

*/
/*
class Employee
{
    int id;
    char name[30];

    public:
    void getdata();
    void putdata();
};

void Employee :: getdata()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter id: ";
    cin >> id;
}

void Employee :: putdata()
{
    cout << id <<" ";
    cout << name << " ";
    cout << endl;
}

int main()
{
    Employee emp[30];
    int n;
    cout << "Enter the no. of employees: ";
    cin >> n;

    for (int i=0; i<n; i++)
    {
        emp[i].getdata();
    }
    cout << "Employee data: " << endl;

    for (int i=0; i<n; i++)
    {
        emp[i].putdata();
    }
    return 0;
}*/

int main()
{
    int a;
    cin >>a;
    if(++a*5 <= 25)
    {
        cout << "Hello";
    }
    else cout << "Bye";
    return 0;
}