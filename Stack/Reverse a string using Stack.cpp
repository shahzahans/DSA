/**
 * Practice Problem ~ Shadman S.
 * Topic: Stack
 * Problem Statement: given a string, reverse it using stack
 */
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    stack <char> a; //declaring stack of characters
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    for(char c:s){
        a.push(c);
    }
    
    int n = s.length();
    for (int i=0; i<n;i++){
        s[i] = a.top();
        a.pop();
    }
    cout << "The reverse string of the given string is \"" << s << "\"" << endl;

    return 0;
}