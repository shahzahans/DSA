/**
 * Practice Problem ~ Shadman S.
 * Topic: Recursion
 * ~ Print numbers in Increasing order
 * Problem Statement: Given an array of integers, print all its elements using Recursion
 */
#include <iostream>
using namespace std;

void recursion(int a[], int n, int i){ // recursion function to print all the arrays
    if (i == n){ //if i equal to n the n then functions exits
        return;
    }
    else if (i == n-1){ // else-if case to print the last array without the ","
        cout << a[i];
    }
    else{
        cout << a[i] << ","; //else print all other array elements
    }
    recursion(a,n,i+1); //calling the recusrion function
}

int main()
{
    int a[] = {1,5,6,7,8,9,10}; // initialized the arrays
    int n = sizeof(a)/sizeof(a[0]); // finding the size of array
    
    cout << "The elements in the array are {";
    recursion(a,n,0); // calling the function
    cout << "}";

    return 0;
}
