#include <iostream> 
using namespace std; 

template <typename T>
class Box {
private: 
    T item; 
public: 
    void setItem(T value) {
        item = value;
    }

    T getItem() {
        return item;
    }
};

int main () {
    Box<int> intBox;
    intBox.setItem(1);
    cout << "Integer Box: " << intBox.getItem() << endl;

    Box<string> charBox;
    charBox.setItem("Coca"); 
    cout << "String Box: " << charBox.getItem()<<endl;

    return 0;
}
