// Problem Statement: Given an integer N, return true it is an Armstrong number otherwise return false.
#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
    int sum = 0;
    int duplicate = n; 

    while(n > 0){
        int ld = n % 10;
        sum = sum + (ld*ld*ld); // works for 3-digit Armstrong numbers
        n = n/10;
    }
    return duplicate == sum;
}

int main(){
    int n;
    cin >> n;
    if(isArmstrong(n)) cout << "true";
    else cout << "false";
    
    return 0;
}