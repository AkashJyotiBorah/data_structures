//Print linearly 1 to N or N to 1

#include<bits/stdc++.h>
using namespace std;

void isPrint(int i, int n){
    if(i<1){
        return;
    }
    isPrint(i-1 , n);
    cout<< i <<",";
}

int main(){
    int n;                                                                                          
    cin >> n;
    
    isPrint(n, n);
}