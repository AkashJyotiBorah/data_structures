#include<bits/stdc++.h>
using namespace std;

// void swap(int *a , int *b){
//     *a = *a + *b;
//     *b= *a - *b;
//     *a= *a - *b;
// }

// void insertion_sort(int a[], int n){
//     for( int i= 1; i<=n-1; i++){
//         int  j= i;
//         while(j>0 && a[j-1]> a[j]){
//             swap(a[j-1], a[j]);
//             j--;
//         }
//     }
// }

void insertion_sort(int a[], int n){
    for(int i=1; i<n; i++){
        int j= i-1;
        int value = a[i];

        while(j>=0 && value < a[j]){
                a[j+1]= a[j];
                j--;
        }
        a[j + 1] = value;
    }
}

void recursive_insertion(int a[], int n) {
    if (n <= 1) return;

    recursive_insertion(a, n - 1);

    int value = a[n - 1];
    int j = n - 2;

    while ( j >= 0 && a[j] > value) {
        a[j +  1] = a[j];
        j--;
    }

    a[j + 1] = value;
}

int main(){
    int a[5] = {};
    for(int i = 0; i <5; i++){
        cin >> a[i];
    }

    recursive_insertion(a, 5);

    for(int i = 0; i <5; i++){
        cout << a[i] << " ";
    }

    return 0;

}