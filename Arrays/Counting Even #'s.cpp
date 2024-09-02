/**
 * Practice Problem ~ Shadman S.
 * Topic: Array'S 
 * Problem Statement: Given an array of integers, find the count of even elements in it.
 */

#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5,6,9,10,12}; // Initializing Array
    int count = 0; // Creating and initializing a variable to count the even numbers included in Array

    for (int i = 0; i < 9; i++){ // Loop to traverse the Array to find the even numbers
        if(a[i] % 2 == 0){
            count++;
        }
    }
    
    cout << "There are " << count << " even numbers." << endl; // Printing the counted Even numbers that was within the Array

    return 0;
}
