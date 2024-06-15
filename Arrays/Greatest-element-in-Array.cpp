/**
 * Practice Problem ~ Shadman S.
 * Topic: Array'S
 * Problem Statement: Given an Array of integer, find the Greatest/Max of all it's element
 * ex: Arry[3] = {2,7,9}
 * "9 is the Greatest/Max of all it's element"
 */
 
#include <iostream>
using namespace std;

int main()
{
    int Array[5] = {2,4,6,8,20}; // Initializing Array
    int Max = Array[0]; // Declaring variable to 0th place
    for (int i = 0; i < 5 ; i++){ // iterating in Array to find the max element
        if (Array[i] > Max){ // if-statement to find the max element 
            Max = Array[i]; // sets Greatest element to the Max varaib;e
        }
    }
    cout << "The Greatest/Max of all element in Array of integer is: " << Max; // Prints

    return 0;
}