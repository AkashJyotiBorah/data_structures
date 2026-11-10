// Find the highest and lowest frequency element.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {};
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mp;

    for (int i = 0; i < 10; i++)
    {
        mp[arr[i]]++;
    }

    int max = 0;
    int min = 99;
    for (auto pair : mp)
    {
        if (pair.second >= max) {
            max = pair.first;
        }

        if (pair.second <= min) {
            min = pair.first;
        }        
    }

    cout << max << " was repeated the most" << endl;
    cout << min << " was repeated the least" << endl;
}