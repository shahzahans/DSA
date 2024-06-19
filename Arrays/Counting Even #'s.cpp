/**
 * Practice Problem ~ Shadman S.
 * Topic: Array'S
 * Problem Statement: Given an array of integers, find the count of even elements in it.
 */

#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5,6,9,10,12};
    int count = 0;

    for (int i = 0; i < 9; i++){
        if(a[i] % 2 == 0){
            count++;
        }
    }
    
    cout << "There are " << count << " even numbers." << endl;

    return 0;
}