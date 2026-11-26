//Problem Statement: Given an integer N, return the number of digits in N.

#include<bits/stdc++.h>
using namespace std;

int cntDigit(int n){
    int count = 0;
    while(n > 0){
        count = count + 1;
        n = n / 10;
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    cout << cntDigit(n);
    return 0;
}