#include <iostream>
using namespace std;
//Part 1
// int main()
// {
//     int n,arr[10];
//     cout << "Enter size: ";
//     cin >> n;
//     for (int i=0; i<n; i++)
//     {
//         cout << "Enter element: ";
//         cin >> arr[i];
//     }
//     int el1,lb,ub,mid;
//     cout << "Enter element to search: ";
//     cin >> el1;

//     lb=0;
//     ub= n-1;
//     mid=(lb+ub)/2;
//     int location = -1;

//     while (lb<=ub)
//     {
//         if (arr[mid]==el1)
//         {
//             cout << "Location is: " << mid;
//             location=mid;
//             break;
//         }
//         else if (arr[mid]>el1)
//         {
//             ub=mid-1;
//         }
//         else
//         {
//             lb=mid+1;
//         }
        
//         mid = (lb+ub)/2;
//     }
//     if (location == -1)
//     {
//         cout << "Element not found";
//     }
// }

//Part 2

int binarysearch(int A[], int el1,int ub, int lb)
{
    int mid=(lb+ub)/2;
    if (A[mid]==el1)
    {
        cout << "Location is: " << mid;
    }
    else if (A[mid]>el1)
    {
        binarysearch(A,el1,mid-1,lb);
    }
    else
    {
        binarysearch(A,el1,ub,mid+1);
    }
    return mid;
}


int main()
{
    int A[10],N;
    cout << "Enter size: ";
    cin >> N;
    for (int i=0; i<N; i++)
    {
        cout << "Enter value: ";
        cin >> A[i];
    }
    for (int i=0; i<N; i++)
    {
        cout << A[i];
    }
    cout << endl;
    int el1;
    cout << "Enter element to search: ";
    cin >> el1;
    int lb,ub;
    lb=0;
    ub= N-1;
    binarysearch(A,el1,ub,lb);
}