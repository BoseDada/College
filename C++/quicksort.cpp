#include <iostream>
using namespace std;

//Write a program to implement quick sort

int partition(int A[], int lb, int ub)
{
    int pivot = A[lb];
    int start = lb;
    int end = ub;
    while (start<end)
    {
        while (A[start]<=pivot)
        {
            start++;
        }
        while (A[end]>pivot)
        {
            end--;
        }
        if (start<end)
        {
            int temp = A[start];
            A[start]=A[end];
            A[end]=temp;
        }
    }
    int temp = A[lb];
    A[lb]=A[end];
    A[end]=temp;
    return end;
}

void quicksort(int A[], int lb, int ub)
{
    if (lb<ub)
    {
        int loc = partition(A,lb,ub);
        quicksort(A,lb,loc-1);
        quicksort(A,loc+1,ub);
    }
}

int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int A[n];
    for (int i=0; i<n; i++)
    {
        cout<<"Enter the elements: ";
        cin>>A[i];
    }
    quicksort(A,0,n-1);
    cout<<"The sorted array is: ";
    for (int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
