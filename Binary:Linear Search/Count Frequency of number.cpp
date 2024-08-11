/**
 * Practice Problem ~ Shadman S.
 * Topic: Binary Search/Linear Search 
 * ~ Search Element K in sorted Array 
 * Problem Statement: Given a sorted array containing duplicates, count occurrences of a given number
 * return -1 if the element is not present
 */
#include <iostream>
using namespace std;

int linearSearch(int a[], int n, int k){ // Linear Search Function counting the occurance
    int count = 0;
    
    for (int i = 0; i < n; i++){ // loop to count the occurrance
        if(a[i] == k){
            count++;
        }
    }
    return count;
}

int find_first_occurance(int a[], int L, int R, int k){ // Binary search function to find the first index
    int res = -1;
    while(L <= R){ // loop to find the first index, & loop exits if L is greater than R
        int mid = (L+R)/2;
        if (a[mid] == k){ // If the mid key is equal to k then store mid then go to the left side
            res = mid;
            R = mid -1;
        }
        else if (a[mid] > k){ // if mid is greater than k still go to the left side
            R = mid -1;
        }
        else { // if mid is less than the key element then go to the right side 
            L = mid +1; 
        }
    }
    return res;
}

int find_last_occurnace(int a[], int L, int R, int k){ // Binary Search function to find the last index
    int res = -1;
    while(L <= R){
        int mid = (L+R)/2; // loop to find the last index, & loop exists if L is greater than R
        if (a[mid] == k){ // if the mid key is equal to k then store mid then go to the right side
            res = mid;
            L = mid +1;
        }
        else if (a[mid] > k){ // if mid is greater than k go to the left side
            R = mid -1;
        }
        else { // if mid is less than the key element then go to the right side
            L = mid +1;
        }
    }
    return res;
}

int main()
{
    int a[] = {1,2,3,4,5,5,5,6,7}; // initializing the array 
    int k = 5;
    int n = sizeof(a)/sizeof(a[0]); // finding the size of an Array
    
    int frequencyLin = linearSearch(a,n,k); // calling the function
    int firstIndex = find_first_occurance(a,0,n-1,k); // calling the function
    int lastIndex = find_last_occurnace(a,0,n-1,k); // calling the function
    
    int frequencyBin = 0;
    if (lastIndex == -1 || firstIndex == -1){ 
        cout << " -1 it is not present" << endl;
    }
    else {
        frequencyBin = lastIndex - firstIndex +1;
    }
    
    cout << "Using BinarySearch method the counted occurrences of given number is: " << frequencyBin << endl;
    
    if (frequencyLin == 0){
        cout << " -1 it is not present" << endl;
    }
    else{ 
        cout << "Using linear search method the counted occurrences of given number is: " << frequencyLin << endl;
    }
    return 0;
}
