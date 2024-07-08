/**
 * Practice Problem ~ Shadman S.
 * Topic: "Time Comp" ~ Binary Search O(log(n))/Linear Search O(n)
 * ~ Search Element K in sorted Array
 * Problem Statement: Given a sorted array of integers and an element K, write a function which returns the index on 
 * ~ which k is present, using recursion
 */
#include <iostream>
using namespace std;

int linearSearch(int a[], int i, int n, int k){ // recursion Function for linear Search recursion (function calling itself in function ex: line 18 )
    if(i == n){ // 
        return -1; // i reached n then program ends
    }
    if ( a[i] == k){ // if key element is found then return the index
        return i; 
    }
    return linearSearch (a, i+1, n, k); // recursion
}

int binarySearch(int a[], int S, int E, int k){
    int mid = (S+E)/2;
    if(a[mid] == k){
        return mid;
    }
    else if (a[mid] > k){
        return binarySearch(a,S,E-1,k);
        
    }
    else{
        return binarySearch(a,S+1,E,k);
    }
    return -1;
}


int main(){
 int a[] = {1,3,6,8,9,11};
 int k = 6;
 int n = sizeof(a)/sizeof(a[0]);
 int S = 0;
 int E = n-1;
 int index1 = linearSearch(a,0,n,k);
 int index2 = binarySearch(a,S,E,k);
 
 cout << "The element " << k << " using linearSearch was found at index: " << index1 << endl;
 cout << "The element " << k << " using binarySearch was found at index: " << index2 << endl;

    return 0;
}
