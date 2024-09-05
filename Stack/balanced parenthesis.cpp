/**
 * Practice Problem ~ Shadman S.
 * Topic: Stack - Balanced Parenthesis
 * Problem Statement: Given an expression string, write a program to examine whether the pairs and the orders of '(', '{', '[', ')','}',']' are correct in the given expression
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a; //declaring a string 
    cout << "Enter a parenthesis of string: ";
    cin >> a; // inputting the string
    int n = a.size(); //finding the size of string
    stack <char> st; //declaring a stack method to store a string as char
    
    for(int i; i < n; i++){ //loop to find if the parenthesis of the string is balanced or not
        if(st.size() != 0 && st.top() == '(' && a[i] == ')'){ //if size of stack is not 0 and current top() begin parenthesis and a[i] is end parenthesis then pop()
            st.pop();
        }
        else if(st.size() != 0 && st.top() == '[' && a[i] == ']'){//if size of stack is not 0 and current top() begin parenthisis and a[i] is end parenthesis then pop()
            st.pop();
        }
        else if (st.size() != 0 && st.top() == '{' && a[i] == '}'){//if size of stack is not 0 and current top() begin parenthisis and a[i] is end parenthesis then pop()
            st.pop();
        }
        else{ //if the stack is empty push the string as a character
            st.push(a[i]);
        }
    }
    if (st.size() == 0){ //if statements to check if the parenthesis are balanced
        cout << "balanced" << endl;
    }
    else{ // else parenthesis are not balanced
        cout << "not balanced" << endl;
    }

    return 0;
}
