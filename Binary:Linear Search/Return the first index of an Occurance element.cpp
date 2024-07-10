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

 int linearSearch(int a[],int n, int k){
     for (int i = 0; i < n; i ++){
         if(a[i] == k){
             return i;
         }
     }
     return -1;
 }
 
 int binarySearch (int a[], int L, int R, int k){
     
     int res;
     int mid = (L + R)/2;
     if( a[mid] == k){
         res = mid;
         R = mid -1;
     }
     else if( a[mid] > k){
         R = mid -1;
     }
     else{ // a[mid] < k
      L = mid + 1;   
     }
     return res;
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