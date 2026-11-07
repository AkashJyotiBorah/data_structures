#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int arr[6] = {};
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 6 - 1; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}