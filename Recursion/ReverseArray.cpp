/**
 * Practice Problem ~ Shadman S.
 * Topic: Recursion
 * ~ Reverse Array
 * Problem Statement: Given an array of integers, print all its element in reverse order using recursion
 */
#include <iostream>
using namespace std;

void recursion(int a[], int n, int i){ //Function Print the array 
    if(i == n){ //if i reaches n then exits the function
        return;
    }
    cout << a[i] << " "; //priting the array
    recursion(a,n,i+1); //callig the function itself
}
void reverseArray(int a[], int n, int i){ //Function to print the array in reverse order
    if(i < 0){ //if i is less than 0 then exits the function
        return;
    }
    cout << a[i] << " "; //Printing the array
    reverseArray(a,n,i -1); // calling the function itself
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10}; //intializing the array
    // output {10,9,8,7,6,5,4,3,2,1} 
    int n = sizeof(a)/sizeof(a[0]); //finding the size of the array
    int current = n -1; //declaring variable for pointing to index
    
    cout << "The reverse Array of";
    recursion(a,n,0); //calling the function
    cout << "is " ;
    reverseArray(a,n,current); // calling the function
    return 0;
}
