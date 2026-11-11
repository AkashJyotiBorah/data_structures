//check if a string is palindrome or not.

#include<bits/stdc++.h>
using namespace std;

bool f(int i, string &s){
    if (i>= s.size()/2) return true;

    if (s[i]!= s[s.size()- i - 1]) return false;

    return f(i+1, s);
}

int main(){
    string s = "MADSM";
    string result = (f(0, s) == 1) ? "true" : "false";
    cout<<  result;
    return 0;
}