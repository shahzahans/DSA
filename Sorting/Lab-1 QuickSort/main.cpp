#include <iostream>
#include <vector>
#include <ctime>    // for random
using namespace std;

/* Function Prototypes */
void swap(int& lowIdx, int& highIdx);  // Function to swap two elements
int partition(vector<int>& numbers, int lowIdx, int highIdx);  // Partition function to rearrange elements
void quicksort(vector<int>& unsortNumbers, int lowIdx, int highIdx); // Quicksort function
void printVector(const vector<int>& unsortNumbers);  // Helper function to print the vector

int main() {
  // Create an vector to hold the unsorted integers
  vector<int> unsortNumbers;

  srand(time(0)); // generate new random numbers 

  // Fill the vector with 10 randomly generated integers 
  // between -50 and 49 inclusive
  for (int i = 0; i < 10; i++){
    int randomNums = rand() % 100 - 50; // random numbers between -50 and 49
    unsortNumbers.push_back(randomNums);
  }

  // Print the unsorted vector
  cout << "Unsorted numbers: ";
  printVector(unsortNumbers);
  cout << endl;

  // Sort the vector
  quicksort(unsortNumbers,0, unsortNumbers.size() - 1);

  // Print the sorted vector
  cout << "Sorted numbers: ";
  printVector(unsortNumbers);
  cout << endl;

  return 0;
}

void printVector(const vector<int>& unsortNumbers){
  for (int num : unsortNumbers){
    cout << num << " ";
  }
}

void quicksort(vector<int>& unsortNumbers, int lowIdx, int highIdx){
  if (highIdx <= lowIdx){
    return;
  }
  int lowEndIdx = partition(unsortNumbers, lowIdx, highIdx);
  quicksort(unsortNumbers,lowIdx, lowEndIdx); // sort elements before lowEndIndx
  quicksort(unsortNumbers,lowEndIdx + 1, highIdx);// sort elements after lowEndIndx
}

int partition(vector<int>& numbers, int lowIdx, int highIdx){
  int midPoint = lowIdx + (highIdx - lowIdx)/2; // pick the middle as the pivot
  int pivot = numbers[midPoint];

  bool done = false;
  while (!done){
    while (numbers[lowIdx] < pivot){
      lowIdx++;
    }
    while (numbers[highIdx] > pivot){
      highIdx--;
    }
    if (lowIdx >= highIdx){
      done = true;
    }
    else{
      swap(numbers[lowIdx],numbers[highIdx]);
      lowIdx++;
      highIdx--;
    }
  }
  return highIdx;
}

void swap(int& a, int& b){
  int temp = a;
  a = b;
  b = temp;
}

