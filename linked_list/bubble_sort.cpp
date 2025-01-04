#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {
  for (int step = 0; step < size; ++step) {
    for (int i = 0; i < size - step-1; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout<< array[i]<< " ";
  }
}

int main() {
  int data[] = {3,6,2,7,0,-3};
  int size = sizeof(data) / sizeof(data[0]);
  cout<<"Size="<<size<<endl;
  bubbleSort(data, size);
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(data, size);
}
