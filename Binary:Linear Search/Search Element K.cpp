/**
 * Practice Problem ~ Shadman S.
 * Topic: "Time Comp" ~ Binary Search O(log(n))/Linear Search O(n)
 * ~ Search Element K in sorted Array
 * Problem Statement: Given a sorted array of integers and an element K, write a function which returns the index on 
 * ~ which k is present, using loops
 */
#include <iostream>
using namespace std;

int linearSearch(int a[], int n, int k){ // Function for Linear search which traverse through the whole array
    for(int i = 0; i < n; i++){ // loop to find key element
        if (a[i] == k){
            return i; // if found returned
        }
    }
    return -1; // else: not returned -1
}

int binarySearch(int a[], int S, int E, int k){ // Binary Search functions occur by dividing the array by half and goes based on key element > mid or mid element < mid
    while(S <= E){ // While loop to find the key element
        int mid = (S+E)/2; // divedes in half
        
        if(a[mid] == k){ // if mid == key element then return mid
            return mid;
        }
        
        else if (a[mid] > k){ // key element < mid then E points at mid -1
            E = mid - 1;
        }
        else{
            S = mid + 1; // key element > mid then S points at mid +1
        }
    }
    return -1; // not found key then -1
}


int main(){
 int a[] = {1,3,6,8,9,11}; // Initializing the Array
 int k = 6; // key element
 int n = sizeof(a)/sizeof(a[0]); // finding the size
 int S = 0; // initilizing the start variable with 0
 int E = n-1; // initializing the End variable with size -1
 int index1 = linearSearch(a,n,k); // calling the function
 int index2 = binarySearch(a,S,E,k); // calling the function
 
 cout << "The element " << k << " using linearSearch was found at index: " << index1 << endl;
 cout << "The element " << k << " using binarySearch was found at index: " << index2 << endl;

    return 0;
}
