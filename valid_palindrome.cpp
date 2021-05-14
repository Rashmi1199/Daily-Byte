/*
Given a string, return whether or not it forms a palindrome ignoring case and non-alphabetical characters.
Note: a palindrome is a sequence of characters that reads the same forwards and backwards.

Ex: Given the following strings...

"level", return true
"algorithm", return false
"A man, a plan, a canal: Panama.", return true
*/

#include<bits/stdc++.h>
using namespace std;

bool palindrome(string str){
    int n = str.length();

    for (int i = 0; i < n; i++){
        str[i] = tolower(str[i]);
    }

    int low = 0, high = n - 1;

    while (low <= high)
    {
        if (!(str[low] >= 'a' and str[low] <= 'z')){
            low++;
        }
        else if (!(str[high] >= 'a' and str[high] <= 'z')){
            high--;
        }
        else if(str[low] == str[high]){
            low++, high--;
        }
        else{
            return false;
        }
    }
   return true; 
}

int main(){
    string s;
    getline(cin, s);
    if (palindrome(s)){
        cout << "true";
    }
    else{
        cout << "false";
    }

    return 0;
}
