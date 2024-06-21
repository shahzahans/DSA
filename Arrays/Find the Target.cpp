/**
 * Practice Problem ~ Shadman S.
 * Topic: Array'S
 * Problem Statement: Given an array of N integers, and a number valu, the task is to find the number of pairs of integers in the array whose 
 * ~sum is equal to given value
 */

#include <iostream>
using namespace std;

int main()
{
    int Arr[] = {1,4,2,3,0,5};
    int value = 5;
    int count = 0;
    
    for (int i = 0; i < 6; i++){
        for (int j = i + 1; j < 6; j++){
            if (Arr[i] + Arr[j] == value){
                count = count + 1;
            } 
        }       
    }
    
    cout << "The target value is " << value << " and the number of pairs that adds up to " << value << " counted was " << count;

    return 0;
}