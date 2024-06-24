/**
 * Practice Problem ~ Shadman S.
 * Topic: 2D Array'S
 * Problem Statement: given two numbers, start and end prints all the numbers from start to end
 */
 
#include <iostream>
using namespace std;

void printRange (int start, int end){
    
    while (start <= end){
        cout << start << endl;
        start++;
    }
}

int main()
{
    int start = 1;
    int end = 10;
    
    printRange(start, end);

    return 0;
}