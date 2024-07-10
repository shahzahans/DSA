/**
 * Practice Problem ~ Shadman S.
 * Topic: "Time Comp" ~ Binary Search O(log(n))/Linear Search 
 * ~ Search Element K in sorted Array
 * Problem Statement: Given a sorted array of integers and an element K, write a function which returns the first index of 
 * ~ of an element k is present, using recursion
 * return -1 if the element is not present
 */
#include <iostream>
using namespace std;

 int linearSearch(int a[],int n, int k){ // Function for linearSearch medthod
     for (int i = 0; i < n; i ++){ // loop find the first occurance index element of K
         if(a[i] == k){
             return i;
         }
     }
     return -1; // return -1 if not found
 }
 
 int binarySearch (int a[], int L, int R, int k){ // Function to call binarySearch Method
     
     int res; // variable to store mid, if K is == mid
     int mid = (L + R)/2;
     if( a[mid] == k){ // if a[mid] == k then we check left side if the idex is present on left side first
         res = mid;
         R = mid -1;
     }
     else if( a[mid] > k){ // if a[mid] is less than k then we proceed left side to find the occurance k element
         R = mid -1;
     }
     else{ // a[mid] < k // else we go right
      L = mid + 1;   
     }
     return res; // then return res
 }

int main()
{
    int a [] = {1,2,3,4,5,5,5,5,6};
    int k = 5;
    
    int n = sizeof(a)/sizeof(a[0]);
    
    int index1 = linearSearch(a,n,k);
    int index2 = binarySearch(a, 0 , n-1 , k);
    
    cout << "Using linearSearch to find index of occurance element returns: " << index1 << endl;
    cout << "Using binarySearch to find index of occurance element returns: " << index2 << endl;
    return 0;
}
