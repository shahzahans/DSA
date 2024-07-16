/**
 * Practice Problem ~ Shadman S.
 * Topic: Binary Search/Linear Search 
 * ~ Search Element K in sorted Array
 * Problem Statement: Given a sorted character consisting of lowercase alphabets and a particular target value, say k,
 * ~ the task is to find the smallest Element in the list that is larger than K
 */
#include <iostream>
using namespace std;

char solve_bs (char a[], int n, int k){ // function to get the first index 
    int l = 0; // left side pointer
    int r = n-1; // end of index pointer
    
    char res = '\0'; // initialized the res variable store the mid index through out the loop
    while(l <= r){ // loop to find the chars thet is bigger than k but lower than rest of the character
        int mid = (l+r)/2; // to find the mid
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
    char a[] = {'a','b','c','d','e','f'}; // intialized the array of characters
    char k = 'b'; // k is the character to find
    int n = sizeof(a)/sizeof(a[0]); // to find the size of array
    
    char characters = solve_bs(a,n,k); // calling the function
    if (characters == '\0'){ // "if statements" executes then chars is not found 
        cout << "None of the characters are greater than " << k << endl;
    }
    else{
        cout << "The smallest characters greater than " << k << " is " << characters << endl;
    }
    return 0;
}
