#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    try {
        int a[5];
        cout << "Enter 5 integers:\n";
        for (int i = 0; i < 5; i++) cin >> a[i];
        int idx;
        cout << "Enter index (0..4): ";
        cin >> idx;
        if (idx < 0 || idx > 4)
            throw out_of_range("Index out of bounds! Valid index is 0..4.");
        cout << "Element at index " << idx << " is: " << a[idx] << "\n";
    }
    catch (const exception& e) {
        cout << "Error: " << e.what() << "\n";
    }
return 0;
}