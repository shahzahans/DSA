/**
 * Practice Problem ~ Shadman S.
 * Topic: Stack
 * Problem Statement: Given an expression string, write a program to examine whether the pairs and the orders of '(', '{', '[', ')','}',']' are correct in the given expression
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a; //declaring a string 
    cout << "Enter a parenthesis of string: ";
    cin >> a; // inputing the string
    int n = a.size(); //finding the size of string
    stack <char> st; //declaring a stack method to store string as char
    
    for(int i; i < n; i++){ 
        if(st.size() != 0 && st.top() == '(' && a[i] == ')'){
            st.pop();
        }
        else if(st.size() != 0 && st.top() == '[' && a[i] == ']'){
            st.pop();
        }
        else if (st.size() != 0 && st.top() == '{' && a[i] == '}'){
            st.pop();
        }
        else{
            st.push(a[i]);
        }
    }
    if (st.size() == 0){
        cout << "balanced" << endl;
    }
    else{
        cout << "not balanced" << endl;
    }

    return 0;
}
