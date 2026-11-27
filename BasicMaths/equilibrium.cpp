#include <bits/stdc++.h>
using namespace std;

int equilibrium(int arr[], int n){
    int total_sum =0, left_sum=0, rightsum=0;
    
    for(int i = 0; i<n; i++){
        total_sum = total_sum + arr[i];
    }

    for(int i = 0; i<n; i++){
        rightsum = total_sum - left_sum - arr[i];
        
        if (left_sum == rightsum){
            return i;
        }
        
        left_sum += arr[i];
    }

    return -1;
}

int main(){
    int arr[10] = { 4, 2, 7, 3, 5, 6, 1, 4, 3, 2 };

    cout << equilibrium(arr, 10);

    return 0;
}
