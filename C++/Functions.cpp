//to implement inside and outside function in a class
//implement access specifiers
//to implement inline functions
//implement scope resolution operator

#include <iostream>
using namespace std;

class Work
{
private:
    int p,q;
public:
    int getdata()
    {
        cout << "Enter 1st number: ";
        cin >> p;
        cout << "Enter 2nd number: ";
        cin >> q;
        return 0;
    }
    int addition();
};

inline int Work :: addition()
{
    return p+q;
}

int main()
{
    Work result;
    result.getdata();
    cout << "The sum is: " << result.addition();


    return 0;

}


