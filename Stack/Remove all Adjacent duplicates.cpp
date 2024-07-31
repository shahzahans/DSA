/**
 * Practice Problem ~ Shadman S.
 * Topic: Stack
 * Problem Statement: You are given a string consisting of lowercase English letters. 
 *A duplicate removal consists of choosing two adjacent and equal letters and removing them.
 * We repeatedly make duplicate removals on s until we no longer can. Return the final string all such duplicate removal have been made.
 */

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string s; //initializing a string
    cout << "Enter an adjacent similarity string: ";
    cin >> s; //inputting a string ex: ABBBCDD
    
    stack <char> st1; //declaring stack1
    for (auto c:s){ //using ranged for loop to push char of string into stack1
        if(!st1.empty() && st1.top() == c){ //if top of stack1 equals current element, then pop it
            st1.pop();
        }
        else{
            st1.push(c); //else push char into stack1
        }
    } //after the string is pushed then stack1 =  DCBA so we need to push back to another stack to reverse it or a second stack is not needed if you use a = st1.top() + a (line 38) and change every other arguments to st1
    
    stack <char> st2; //declaring stack2
    char c; //initializing char value so char pushed through a single character
    string a; //initializing a string
    while (!st1.empty()){ //loop to push char from stack1 to stack2, loop ends if stack is empty
        c = st1.top();
        st1.pop();
        st2.push(c);
    }
    
    while (!st2.empty()){ loop to push char back into string in order to print
        a += st2.top();
        st2.pop();
    }
    
    cout << "After removing the 2-adjacent and equal letter of string \"" << s <<"\" is \"" << a << "\""; 
    // final output is ABCD
    

    return 0;
}
