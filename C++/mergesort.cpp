#include <iostream>
using namespace std;

//Write a program to implement merge sort

void merge(int A[], int lb, int mid, int ub)
{
    int i=lb;
    int j=mid+1;
    int k=lb;
    int B[ub+1];
    while (i<=mid && j<=ub)
    {
        if (A[i]<A[j])
        {
            B[k]=A[i];
            i++;
            k++;
        }
        else
        {
            B[k]=A[j];
            j++;
            k++;
        }
    }
    if (i>mid)
    {
        while (j<=ub)
        {
            B[k]=A[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i<=mid)
        {
            B[k]=A[i];
            i++;
            k++;
        }
    }
    for (int i=lb; i<=ub; i++)
    {
        A[i]=B[i];
    }
}

void mergesort(int A[], int lb, int ub)
{
    if (lb<ub)
    {
        int mid = (lb+ub)/2;
        mergesort(A,lb,mid);
        mergesort(A,mid+1,ub);
        merge(A,lb,mid,ub);
    }
}

int main()
{
    int n,arr[10];
    cout << "Enter size: ";
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }
    int lb = 0;
    int ub = n-1;
    int mid = (lb+ub)/2;
    mergesort(arr,lb,ub);
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}