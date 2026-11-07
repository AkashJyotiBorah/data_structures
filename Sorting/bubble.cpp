#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;  
    b = temp;
}

// void bubble_sort(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int didSwap = 0;
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 swap(a[j], a[j + 1]);
//                 didSwap = 1;
//             }
//         }
//         if (didSwap == 0)
//         {
//             break;
//         }
//     }
// }

//recursion 
void bubble_sort(int a[], int n)
{
    if(n <= 1) return ;

    for(int i= 0; i<n -1; i++){
        if(a[i] > a[i+1]){
            swap(a[i], a[i+1]);
        }
    }

    bubble_sort(a, n-1);

}

void selection_sort(int a[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int index = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (a[j] > a[i])
            {
                index = j;
            }
        }
        swap(a[i], a[index]);
    }
}

void insertion_sort(int a[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && a[j - 1] > a[j])
        {
            swap(a[j - 1], a[j]);
            j--;
        }
    }
}

int main()
{
    int a[6] = {};

    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }

    bubble_sort(a, 6);
    // selection_sort(a, 6);
    // insertion_sort(a, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}