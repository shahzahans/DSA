/**
 * Practice Problem ~ Shadman S.
 * Topic: Queue - Printing the elements of the queue
 * Problem Statement: Given an array of integers, print all the elements of this queue in FIFO order
 */
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    
    int n = sizeof(a)/sizeof(a[0]);
    queue <int> queue1;
    
    for(int i = 0; i<n; i++){
        queue1.push(a[i]);
    }
    
    cout << "The Elements of the queue are: ";
    while(!queue1.empty()){
        cout << queue1.front() << " ";
        queue1.pop();
    }
    
    return 0;
}