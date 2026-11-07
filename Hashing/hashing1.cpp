//how many times same number appears in this array
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin>> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>> arr[i];
//     }

//     //precompute
//     int hash[13] = {0};
//     for (int i=0; i<n; i++){
//         hash[arr[i]] +=1;
//     }

//     int q;
//     cin>> q;
//     while(q--){
//         int number;
//         cin>> number;
//         //fetch
//         cout<< hash[number] << endl;
//     }

//     return 0;
// }

int main(){
    string s ;
    cin>> s;

    int hash[26]= {0};
    
    for(int i = 0; i<s.size(); i++){
        int index = s[i] - 'a';
        hash[index]++;
    }

    char q;
    cin>> q;

    cout<< hash[q - 'a'];

    return 0;

}