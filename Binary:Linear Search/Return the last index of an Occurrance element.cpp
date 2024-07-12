/**
 * Practice Problem ~ Shadman S.
 * Topic: "Time Comp" ~ Binary Search
 * ~ Search Element K in sorted Array
 * Problem Statement: Given a sorted array of integers and an element K, write a function which returns the last index of 
 * ~ of an element k is present, using recursion 
 * - occurence element of last index is found through BinarySearch only.
 * return -1 if the element is not present
 */
#include <iostream>
using namespace std;

int BinarySearch(int a[], int L, int R, int k){
    int res = -1;
    while (L <= R){
        int mid = (L + R)/2;
        if(a[mid] == k){
            res = mid;
            L = mid + 1;
        }
        else if (a[mid] > k){
            R = mid -1;
        }
        else{
            L = mid + 1;
        }
    }
    return res;
}

int main()
{
    int a[] = {4,4,4,5,6,7};
    int k = 4;
    int n = sizeof(a)/ sizeof(a[0]);

    int LastIndex = BinarySearch(a, 0, n-1, k);
    
    cout <<"Last time " << k << " appears is in index: a[" << LastIndex << "]" << endl;
    
    return 0;
}