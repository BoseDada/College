#include <iostream>
using namespace std;

//Write a program to implement fractional knapsack problem
int partition(float A[], int lb, int ub)
{
    float pivot;
    pivot = A[lb];
    int p = lb;
    int q = ub;
    while (p<q)
    {
        while (A[p] > pivot)
        {
            p++;
        }
        while (pivot > A[q])
        {
            q--;
        }
        if (p<q)
        {
            float temp = A[p];
            A[p] = A[q];
            A[q] = temp;
        }
    }
   
    float temp1 = pivot;
    pivot = A[q];
    A[q] = temp1;
    
    return q;
}

void quicksort(float A[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(A,lb,ub);
        quicksort(A,lb,loc-1);
        quicksort(A,loc+1,ub);
    }
}

int main()
{
    cout << "Name: Adyot Bose" << endl;
    cout << "Enrollment no.: A2305221082" << endl;
    int n, i, j, wt, temp, temp1, temp2;
    float sum = 0, total = 0;
    cout << "Enter the number of items: ";
    cin >> n;
    float weight[n], profit[n];
    float ratio[n], x[n];
    cout << "-Enter the weight and profit of each item-";
    cout << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter weight: ";
        cin >> weight[i];
        cout << "Enter profit: ";
        cin >> profit[i];
    }
    cout << "Enter the weight of the knapsack: ";
    cin >> wt;
    for (i = 0; i < n; i++)
    {
        ratio[i] = (profit[i] / weight[i]);
        x[i] = 0;
    }
    quicksort(ratio,0,n-1);
    cout << endl;
    cout << "Sorted ratios" << endl;
    for (int i=0; i<n; i++)
    {
        cout << ratio[i] << " ";
    }
    cout << endl;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            for (int k=0; k<n;k++)
            {
                if (ratio[i] == (profit[j] / weight[k]))
                {
                    temp = weight[k];
                    weight[k] = weight[i];
                    weight[i] = temp;
                    temp1 = profit[j];
                    profit[j] = profit[i];
                    profit[i] = temp1;
                }
            }
        }
    }
    cout << "Profits: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << profit[i] << " ";
    }
    cout << endl;
    cout << "Weights: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << weight[i] << " ";
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        if (total + weight[i] <= wt)
        {
            x[i] = 1;
            total += weight[i];
        }
        else
        {
            x[i] = (wt - total) / weight[i];
            total = wt;
            break;
        }
    }
    for (i = 0; i < n; i++)
    {
        sum += x[i] * profit[i];
    }
    cout << endl;
    cout << "The maximum profit is: " << sum;
    cout << endl;
    cout << "The solution vector is: ";
    for (i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}



