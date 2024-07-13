/**
 * Practice Problem ~ Shadman S.
 * Topic: Binary Search/Linear Search 
 * ~ Search Element K in sorted Array
 * Problem Statement: Given a sorted characters consiting of lowercase alphabets and particular target value, say k,
 * ~ the task is to find the smallest Element in the list that is larger than K
 */
#include <iostream>
using namespace std;

char solve_bs (int a[], int n, int k){
    int l = 0;
    int r = n-1;
    
    int res = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if (a[mid] == k){
            l = mid +1;
        }
        else if(a[mid] > k){
            res = a[mid];
            r = mid -1;
        }
        else{
            l = mid +1;
        }
    }
    return res;
}

int main()
{
    int a[] = {1,3,5,6,7,9};
    int k = 9;
    int n = sizeof(a)/sizeof(a[0]);
    
    int val = solve_bs(a,n,k);
    if (val == -1){
        cout << "None of the Element are greater than " << k << endl;
    }
    else{
        cout << "The smallest element greater than " << k << " is " << val << endl;
    }
    return 0;
}