// print 1 to N using backtracking 

#include<bits/stdc++.h>
using namespace std;

//print N to 1
// void print1(int i , int n){
//     if(i>n){
//         return;
//     }

//     print1(i+1, n);
//     if(i%2==0){
//         cout<< i <<",";
//     }

// }

//print 1 to N
void print1(int i , int n){
    if(i<1){
        return;
    }

    print1(i-1, n);
    if(i%2==0){
        cout<< i <<",";
    }

}

int main(){
    int n;
    cin >> n;

    // print1(1, n);
    print1(n, n);
}