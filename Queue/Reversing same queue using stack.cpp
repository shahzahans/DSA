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
    int a[] = {1,2,3,4,5,6,7,8,9,10}; //initialize the array
    int n = sizeof(a)/sizeof(a[0]); // finding the size of an array
    
    queue <int> queue1; // decalring a queue
    
    for (int i = 0; i < n; i++){ //loop to push array of elements into queue
        queue1.push(a[i]);
    }
    
    cout << "The Original ordering of the queue elements are: ";
    
    stack <int> st1; //declaring stack
    while(!queue1.empty()){ //pushing all the elements in queue to stack and then removing it from queue
        cout << queue1.front() << " ";
        st1.push(queue1.front());
        queue1.pop();
    }
    
    cout << endl;
    while(!st1.empty()){ //pushing back to the queue from stack 
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
