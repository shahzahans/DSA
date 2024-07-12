/**
 * Practice Problem ~ Shadman S.
 * Topic: "Time Comp" ~ Binary Search
 * ~ Search Element K in sorted Array
 * Problem Statement: Given a sorted array of integers and an element K, write a function that returns the last index of 
 * ~ of an element k is present, using recursion 
 * return -1 if the element is not present
 */
#include <iostream>
using namespace std;

int linearSearch(int a[], int n, int k){ // LinearSearch Function for finding the last element
    for (int i = n -1; i >= 0; i--){ // reverse loop to find the key element present in the last index
        if(a[i] == k){ 
            return i; // if found returns the index
        }
    }
    return -1; // if not found returns -1
}

int BinarySearch(int a[], int L, int R, int k){ // BinarySearch function for finding the last element
    int res = -1;
    while (L <= R){ // loop to find the last element index until the Left pointers become greater than the Right pointer
        int mid = (L + R)/2; // mid pointer is created to start the search by diving the array in half
        if(a[mid] == k){ // if mid is equal to the key element then the mid variable is stored in res the Left points to mid +1
            res = mid;
            L = mid + 1;
        }
        else if (a[mid] > k){ // if mid is greater than k then Right points to mid - 1
            R = mid -1;
        }
        else{ // if mid is less than k then Left points to mid + 1
            L = mid + 1;
        }
    }
    return res; // return res
}

int main()
{
    int a[] = {4,4,4,5,6,7}; // initializing the array
    int k = 4;
    int n = sizeof(a)/ sizeof(a[0]); // finding the size of array

    int LastIndex = BinarySearch(a, 0, n-1, k); // calling the function
    int LastIndex1 = linearSearch(a, n , k); // calling the function
    
    cout <<"Last time " << k << " appears is in index: a[" << LastIndex << "]" << endl;
    cout <<"Last time " << k << " appears is in index: a[" << LastIndex1 << "]" << endl;
    return 0;
}
