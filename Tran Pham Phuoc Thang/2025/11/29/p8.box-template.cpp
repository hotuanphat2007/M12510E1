// Create a class template that stores one item of any type and has methods to set and get the value.
#include <iostream>
using namespace std;

template <typename T>
class Box
{
private:
    T item;

public:
    void setItem(T value)
    {
        item = value;
    }
    T getItem()
    {
        return item;
    }
};

int main()
{
    Box<int> intBox;
    intBox.setItem(123);
    cout << "Integer Box contains: " << intBox.getItem() << endl;

    Box<float> floatBox;
    floatBox.setItem(45.67f);
    cout << "Float Box contains: " << floatBox.getItem() << endl;

    Box<string> stringBox;
    stringBox.setItem("Hello, Templates!");
    cout << "String Box contains: " << stringBox.getItem() << endl;

    return 0;
}