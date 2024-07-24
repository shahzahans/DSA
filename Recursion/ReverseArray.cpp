/**
 * Practice Problem ~ Shadman S.
 * Topic: Recursion
 * ~ Reverse Array
 * Problem Statement: Given an array of integers, print all its element in reverse order using recursion
 */
#include <iostream>
using namespace std;

void recursion(int a[], int n, int i){
    if(i == n){
        return;
    }
    cout << a[i] << " ";
    recursion(a,n,i+1);
}
void reverseArray(int a[], int n, int i){
    if(i < 0){
        return;
    }
    cout << a[i] << " ";
    reverseArray(a,n,i -1);
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    // output {10,9,8,7,6,5,4,3,2,1}
    int n = sizeof(a)/sizeof(a[0]);
    int current = n -1;
    
    cout << "The reverse Array of";
    recursion(a,n,0);
    cout << "is " ;
    reverseArray(a,n,current);
    return 0;
}