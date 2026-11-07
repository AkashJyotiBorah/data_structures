#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, int low, int mid, int high)
{
    vector<int> left, right;

    // Copy left half
    for(int i = low; i <= mid; i++)
    {
        left.push_back(a[i]);
    }

    // Copy right half
    for(int i = mid + 1; i <= high; i++)
    {
        right.push_back(a[i]);
    }

    int i = 0;
    int j = 0;
    int k = low;

    // Compare both arrays
    while(i < left.size() && j < right.size())
    {
        if(left[i] < right[j])
        {
            a[k] = left[i];
            i++;
        }
        else
        {
            a[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy remaining left elements
    while(i < left.size())
    {
        a[k] = left[i];
        i++;
        k++;
    }

    // Copy remaining right elements
    while(j < right.size())
    {
        a[k] = right[j];
        j++;
        k++;
    }
}

void merge_sort(vector<int> &a, int low, int high)
{
    if(low == high)
        return;

    int mid = (low + high) / 2;

    merge_sort(a, low, mid);
    merge_sort(a, mid + 1, high);

    merge(a, low, mid, high);
}

int main()
{
    vector<int> a = {4, 5, 10, 4, 2, 7};

    merge_sort(a, 0, a.size() - 1);

    for(auto x : a)
        cout << x << " ";
}