/**
 * Practice Problem ~ Shadman S.
 * Topic: Binary Search/Linear Search 
 * ~ Search Element K in sorted Array
 * Problem Statement: Given a sorted characters consiting of lowercase alphabets and particular target value, say k,
 * ~ the task is to find the smallest Element in the list that is larger than K
 */
#include <iostream>
using namespace std;

char solve_bs (char a[], int n, int k){
    int l = 0;
    int r = n-1;
    
    char res = '\0';
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
    char a[] = {'a','b','c','d','e','f'};
    char k = 'b';
    int n = sizeof(a)/sizeof(a[0]);
    
    char characters = solve_bs(a,n,k);
    if (characters == '\0'){
        cout << "None of the characters are greater than " << k << endl;
    }
    else{
        cout << "The smallest characters greater than " << k << " is " << characters << endl;
    }
    return 0;
}