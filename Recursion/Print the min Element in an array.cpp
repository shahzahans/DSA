/**
 * Practice Problem ~ Shadman S.
 * Topic: Recursion
 * ~ Minimum Element in an array
 * Problem Statement: Given an array of integers, print the minimum (smallest) element in it using recursion
 */
#include <iostream>
using namespace std;

int findMin(int a[], int n, int i, int mn){ //Function to find minimum element
    //base case
    if(i == n){ // if i reaches the end of array then exits out by returning mn
        return mn; 
    }
    //task
    mn = min(mn,a[i]); // min function to find minimum element
    return findMin(a,n,i+1,mn); //calling function itself (recursion method)
    
}

int main()
{
    int a[] = {1,-2,4,3,-10,-20};
    int n = sizeof(a)/sizeof(a[0]);
    
    int mn = a[0];
    
   cout << "The minimum element in an array is " << findMin(a,n,0,mn);
    
    

    return 0;
}
