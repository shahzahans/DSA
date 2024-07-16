/**
 * Practice Problem ~ Shadman S.
 * Topic: Binary Search/Linear Search 
 * ~ Search Element K in sorted Array
 * Problem Statement: Given a sorted character consisting of lowercase alphabets and a particular target value, say k,
 * ~ the task is to find the smallest Element in the list that is larger than K
 */
#include <iostream>
using namespace std;

char solve_bs (int a[], int n, int k){ // function to get the first index
    int l = 0; // left side pointer
    int r = n-1;// end of index pointer
    
    int res = -1; // initialized the res variable store the mid index through out the loop
    while(l <= r){ // loop to find the element thet is bigger than k but lower than rest of the element
        int mid = (l+r)/2; // to find the mid index
        if (a[mid] == k){ // if mid is equal to k than left side points to mid +1
            l = mid +1; 
        }
        else if(a[mid] > k){ // if mid is bigger than k then, store the mid in res variable and r pointer moves -1
            res = a[mid];
            r = mid -1;
        }
        else{ // else left side point to mid +1
            l = mid +1;
        }
    }
    return res;
}

int main()
{
    int a[] = {1,3,5,6,7,9}; // initialied the array of integers
    int k = 9; // k is the element to find
    int n = sizeof(a)/sizeof(a[0]); // size of the array
    
    int val = solve_bs(a,n,k); // calling the function
    if (val == -1){
        cout << "None of the Element are greater than " << k << endl;
    }
    else{
        cout << "The smallest element greater than " << k << " is " << val << endl;
    }
    return 0;
}
