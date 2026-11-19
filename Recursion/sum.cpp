//sum of fist N numbers paramiterised or functional
#include<bits/stdc++.h>
using namespace std;

//Parameterised
void sum1(int i , int sum){
    if(i<1){
        cout<< sum;
        return;
    }
    return sum1(i-1, sum+i);
}

//Functional
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     return n + sum(n-1);
// }

int main(){
    int n;
    cin>> n;

    sum1(n, 0);
    // cout<< sum(n);
}