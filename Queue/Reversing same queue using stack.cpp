/**
 * Practice Problem ~ Shadman S.
 * Topic: Queue - Reverse a queue using a stack
 * Problem Statement: Given an array of integers, Reverse the same using stack
 */
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a)/sizeof(a[0]);
    
    queue <int> queue1;
    
    for (int i = 0; i < n; i++){
        queue1.push(a[i]);
    }
    
    cout << "The Original ordering of the queue elements are: ";
    stack <int> st1;
    while(!queue1.empty()){
        cout << queue1.front() << " ";
        st1.push(queue1.front());
        queue1.pop();
    }
    
    cout << endl;
    while(!st1.empty()){
        queue1.push(st1.top());
        st1.pop();
    }
    
    cout << "The Reverse odering of the queue elements are: ";
    
    while(!queue1.empty()){
        cout << queue1.front() << " ";
        queue1.pop();
    }

    return 0;
}