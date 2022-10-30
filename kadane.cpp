#include <iostream>
using namespace std;
int kadane(int n, int a[])
{
    int MaxSum = 0, Sum = 0;
    for (int i = 0; i < n; i++)
    {
        Sum = max(a[i], Sum + a[i]);
        MaxSum = max(Sum, MaxSum);
    }
    return MaxSum;
}
int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter array : ";
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The maximum sum of subarray is : " << kadane(n, a);
    return 0;
}