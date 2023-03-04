#include <iostream>
using namespace std;

class ticket
{
    int ticketid;
    int passengerid;
    int paymentid;
    int age;

    public:
    static int count;
    static int Price;

    ticket(int ID, int TickID, int Age)
    {
        ID=passengerid;
        TickID=ticketid;
        Age=age;
        count++;
    };

    ~ticket()
    {
        cout << "Your details are successfully registered" << endl;
        count--;
    };

    static void showcount();
    friend int payment(int paymentid);
};

int ticket :: count=0;
int ticket :: Price=1000;

void ticket :: showcount()
{
    cout << "No. of passengers: " << count << endl;
}

int payment(int paymentid)
{
    cout << "Payment obtained" << endl;
    return 0;
}

int main()
{
    int pID,tID,pAge,payID;
    cout << "Enter ID: ";
    cin >> pID;
    cout << "Enter Ticket ID: ";
    cin >> tID;
    cout << "Enter Age: ";
    cin >> pAge;
    
    ticket t1(pID,tID,pAge);
    cout << "Enter payid: ";
    cin >> payID;

    payment(payID);

    ticket :: showcount();

    return 0;
}