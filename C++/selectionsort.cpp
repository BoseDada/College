#include <iostream>
using namespace std;

//Write a program to implement selection sort

void selectionsort(int A[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        int min = i;
        for (int j=i+1; j<n; j++)
        {
            if (A[j]<A[min])
            {
                min = j;
            }
        }
        int temp = A[i];
        A[i] = A[min];
        A[min] = temp;
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
    selectionsort(A,n);
    cout<<"The sorted array is: ";
    for (int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}

