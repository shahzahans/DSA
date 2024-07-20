/**
 * Practice Problem ~ Shadman S.
 * Topic: Recursion
 * ~ Print numbers in Increasing order
 * Problem Statement: Given an array of integers, print all its elements using Recursion
 */
#include <iostream>
using namespace std;

void recursion(int a[], int n, int i){
    if (i == n){
        return;
    }
    else if (i == n-1){
        cout << a[i];
    }
    else{
        cout << a[i] << ",";
    }
    recursion(a,n,i+1);
}

int main()
{
    int a[] = {1,5,6,7,8,9,10};
    int n = sizeof(a)/sizeof(a[0]);
    
    cout << "The elements in the array are {";
    recursion(a,n,0);
    cout << "}";

    return 0;
}