/**
 * Practice Problem ~ Shadman S.
 * Topic: Functions 
 * Problem Statement: given two numbers, start and end print all the numbers from start to end
 */
 
#include <iostream>
using namespace std;

void printRange (int start, int end){ // Function to print the range from start to end
    
    while (start <= end){ // while loop prints the range from start to end
        cout << start << endl;
        start++;
    }
}

int main()
{
    int start = 1; // initialized variable to have a starting point
    int end = 10; // initialized variable to have an ending point
    
    printRange(start, end);

    return 0;
}
