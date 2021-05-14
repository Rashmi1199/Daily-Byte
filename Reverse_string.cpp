/*
Given a string, reverse all of its characters and return the resulting string.

Ex: Given the following strings...

“Cat”, return “taC”
“The Daily Byte”, return "etyB yliaD ehT”
“civic”, return “civic”

*/


#include<bits/stdc++.h>
using namespace std;

void rev(string &s){
    int n = s.length();
    int fw;
    for (fw = 0; fw < n / 2; fw++){
        swap(s[fw], s[n - 1 - fw]);
    }
}

int main(){
    string s;
    getline(cin, s);
    rev(s);
    cout << s;

    return 0;
}
