/**
 * Practice Problem ~ Shadman S.
 * Topic: Queue - Reverse a queue 
 * Problem Statement: Given an array of integers, print all the elements of this queue in reverse order
 */
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10}; //intializing array
    int n = sizeof(a)/sizeof(a[0]); //finding the size of an array
    
    queue <int> queue1; //declaring queue
    
    for (int i = n-1; i > -1; i--){ //loop to push array's element into the queue
        queue1.push(a[i]);
    }
    
    for (int i=0; i<n; i++){ //loop to print the elements that is stored in queue
        cout << queue1.front() << " ";
        queue1.pop();
    }
    

    return 0;
}
