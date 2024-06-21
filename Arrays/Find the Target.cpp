/**
 * Practice Problem ~ Shadman S.
 * Topic: Array'S
 * Problem Statement: Given an array of N integers, and a number value, the task is to find the number of pairs of integers in the array whose 
 * ~sum is equal to the given value
 */

#include <iostream>
using namespace std;

int main()
{
    int Arr[] = {1,4,2,3,0,5}; // Initialize the Array
    int value = 5; // Initialize the target value
    int count = 0; // Initialize variable to count 
    
    for (int i = 0; i < 6; i++){ // loop to search first element that adds up to Target
        for (int j = i + 1; j < 6; j++){ // nested loop to search the second element that adds up to Target
            if (Arr[i] + Arr[j] == value){
                count = count + 1; // counts the numbers that add up to target value
            } 
        }       
    }
    
    cout << "The target value is " << value << " and the number of pairs that adds up to " << value << " counted was " << count;

    return 0;
}
