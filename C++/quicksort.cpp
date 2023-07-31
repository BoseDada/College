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
            int temp=A[start];
            A[start]=A[end];
            A[end]=temp;
        }
    }
    int temp = A[lb];
    A[lb] = A[end];
    A[end] = temp;
    return end;
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
    int loc = partition(arr,lb,ub);
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    // cout << endl;
    // cout << "Location is: " << loc;
}
