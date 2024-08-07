/**
 * Practice Problem ~ Shadman S.
 * Topic: Stack - Print FIFO order using Stack 
 * Problem Statement: Given an array of integers, print its element in FIFO (left to right order) using stack
 */
 
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int a[] = {1,2,3,4,5,6,7};
    stack <int> st1;
    stack <int> st2;
    
    for(int i=0; i<7; i++){
        st1.push(a[i]);
    }
    
    cout << "First stack contains arrays as reversed {";
    
    while (!st1.empty()){
        if (st1.top() == a[0]){
            cout << st1.top();
        }
        else{
            cout << st1.top() << ",";
        }
        st2.push(st1.top());
        st1.pop();
    }
    
    cout << "}";
    cout << endl;
    cout << "Second stack contains arrays as {";
    
    while (!st2.empty()){
        if (st2.top() == a[6]){
            cout << st2.top();
        }
        else{
            cout << st2.top() << ",";
        }
        st2.pop();
    }
    cout << "}";
    

    return 0;
}
