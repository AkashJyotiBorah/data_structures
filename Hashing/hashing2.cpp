#include<bits/stdc++.h>
using namespace std;

int main(){
    string s ;
    cin >> s;

    map<char, int> mp;

    for (int i=0; i<s.size(); i++){
        mp[s[i]]++;
    }

    char q;
    cin >> q;
    cout<< mp[q];

    return 0;
}