#include<bits/stdc++.h>
int i =0;
bool checkPalindrome(char input[]) {
    // Write your code here
    const int n=strlen(input);
    
    if(i>=n/2)
        return true;
    else if(input[i]!=input[n-i-1])
    { 
        return false;
    }
i++;
    return checkPalindrome(input);
    
}

#include <iostream>
using namespace std;

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}