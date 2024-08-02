/**
 * Practice Problem ~ Shadman S.
 * Topic: Stack - Reverse a string
 * Problem Statement: given a string, reverse it using a stack
 */
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    stack <char> a; //declaring stack of characters
    string s; //initialize variable 
    cout << "Enter a string: ";
    cin >> s; //inputting a string
    
    for(char c:s){  //range-based for loops used for pushing every element on a string to stack
        a.push(c);
    }
    
    int n = s.length(); // getting the length of the string
    for (int i=0; i<n;i++){ //loop to pop the top numbers in reverse in s 
        s[i] = a.top();
        a.pop();
    }
    cout << "The reverse string of the given string is \"" << s << "\"" << endl;

    return 0;
}
