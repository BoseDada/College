#include <iostream>
using namespace std;

//Write a program to implement bubble sort

void bubblesort(int A[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-1-i; j++)
        {
            if (A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Name: Adyot Bose" << endl;
    cout << "Enrolmentno.: A2305221082" << endl;
    cout<<"Enter size: ";
    cin>>n;
    int A[n];
    for (int i=0; i<n; i++)
    {
        cout<<"Enter the elements: ";
        cin>>A[i];
    }
    bubblesort(A,n);
    cout<<"The sorted array is: ";
    for (int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}

