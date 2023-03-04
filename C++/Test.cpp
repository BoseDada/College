#include<iostream>
using namespace std;
class Length
{
private:
int feet;
int inches;
public:
Length()
{
feet=0;
inches=0;
}
Length(int f,int i)
{
feet=f;
inches=i;
}
void getdata()
{
cout<<"\n Enter Feet and Inches:";
cin>>feet>>inches;
}
void putdata()
{
cout<<"\n Feet:"<<feet;
cout<<"\n Inches:"<<inches;
}
Length operator*(int);
};
Length Length::operator*(int n)
{
Length temp;
temp.feet=feet*n;
temp.inches=inches*n;
return temp;
}
int main()
{
Length l1,l2;
int n;
l1.getdata();
cout<<"\n Enter the number:";
cin>>n;
l2=l1*n;
cout<<"\n Length 1:";
l1.putdata();
cout<<"\n Length 2:";
l2.putdata();
return 0;
}