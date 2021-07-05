#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n, k, maxNum = INT_MIN, minNUm = INT_MAX;

    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        maxNum = max(arr[i], maxNum);
        minNUm = min(arr[i], minNUm);
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (i == k - 1)
        {
            cout << arr[i];
        }
    }

    cout << maxNum << " " << minNUm;

    return 0;
}