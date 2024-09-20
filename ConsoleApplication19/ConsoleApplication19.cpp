#include <iostream>

using namespace std;

int main() {
  
    int size;
    cout << "Enter size mass: ";
    cin >> size;

    int* array = new int[size];
    srand(time(0)); 

    cout << "Mass: ";
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 201 - 100; 
        cout << array[i] << " ";
    }
    cout << endl;
    int* positive = new int[size]; 
    int* negative = new int[size];  
    int* zero = new int[size];

    int posCount = 0, negCount = 0, zeroCount = 0; 

   
    for (int i = 0; i < size; ++i) {
        if (array[i] > 0) {
            positive[posCount++] = array[i];
        }
        else if (array[i] < 0) {
            negative[negCount++] = array[i];
        }
        else {
            zero[zeroCount++] = array[i];
        }
    }
    cout << endl;
    cout << "Positive: ";
    for (int i = 0; i < posCount; ++i) {
        cout << positive[i] << " ";
    }
    cout << endl;

    cout << "Negative: ";
    for (int i = 0; i < negCount; ++i) {
        cout << negative[i] << " ";
    }
   
    cout << endl;
    cout << "Zero: ";
    for (int i = 0; i < zeroCount; ++i) {
        cout << zero[i] << " ";
    }
    cout << endl;
    delete[] array;
    delete[] positive;
    delete[] negative;
    delete[] zero;

    return 0;
}

