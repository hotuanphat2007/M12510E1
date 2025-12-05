#include <iostream>
using namespace std; 

int main () {
    int arr[5] = {10,20,30,40,50};
    int index;

    cout << "Enter index (0-4)";
    cin >> index; 

    try {
        if (index <0 || index >4) {
            throw out_of_range("Index is out of bounds!");
        }
        cout << "Element at index " << index << "=" << arr[index] << endl;
    }
    catch (const out_of_range &e ) {
        cerr << "Exception caught: " << e.what() << endl;
    }
    return 0;
}