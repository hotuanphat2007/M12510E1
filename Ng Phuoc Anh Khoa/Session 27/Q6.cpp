#include <iostream> 
using namespace std; 

template <typename T> 
void bubbleSort(T array [], int size) {
    for (int step =0; step < size -1; ++step) {
        bool swapped = false;
        for (int i =0;i <size -step-1;i++) {
            if (array[i] > array[i+1]) {
                T temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                swapped =true;
            }
        }
        if (!swapped) break;
    }
}

int main () {
    int array [3] = {5,3,2};
    int size = sizeof(array) / sizeof(array[0]);
    bubbleSort (array,size);

    cout << "Sorted array: ";
    for (int i =0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}