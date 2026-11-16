#include<bits/stdc++.h>
using namespace std;


void namePrint(int i, int j, int n){
    if(i>n){
        return;
    }

    if(j > i) {
        cout << "fuck you\n";
        return;
    }
    
    if(i==j){
        cout<< "Borah\n";
    }
    else{
        cout<< "Akash\n";
    }
    namePrint(i+1, j, n);
}

int main(){
    int n;
    cin >> n;

    namePrint(1, 6, n);
}