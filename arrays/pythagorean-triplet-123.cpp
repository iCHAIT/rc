#include <iostream>
#include <algorithm>
using namespace std;

bool isTriplet(int arr[], int n)
{
    for (int i=0; i<n; i++)   // O(n)
        arr[i] = arr[i]*arr[i];

    sort(arr, arr + n);   // O(nlogn)

    for (int i = n-1; i >= 2; i--)    // O(n)
    {

        int l = 0;
        int r = i-1;
        while (l < r)
        {
            if (arr[l] + arr[r] == arr[i])
                return true;

            (arr[l] + arr[r] < arr[i])?  l++: r--;
        }
    }

    return false;
}

int main()
{
    int arr[] = {3, 1, 4, 6, 5};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    isTriplet(arr, arr_size)? cout << "Yes": cout << "No";
    return 0;
}