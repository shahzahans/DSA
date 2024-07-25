/**
 * Practice Problem ~ Shadman S.
 * Topic: Recursion
 * ~ Minimum Element in an array
 * Problem Statement: Given an array of integers, print the minimum (smallest) element in it using recursion
 */
#include <iostream>
using namespace std;

int findMin(int a[], int n, int i, int mn){
    //base case
    if(i == n){
        return mn;
    }
    //task
    mn = min(mn,a[i]);
    return findMin(a,n,i+1,mn);
    
}

int main()
{
    int a[] = {1,-2,4,3,-10,-20};
    int n = sizeof(a)/sizeof(a[0]);
    
    int mn = a[0];
    
   cout << "The minimum element in an array is " << findMin(a,n,0,mn);
    
    

    return 0;
}