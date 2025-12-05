#include <iostream> 
#include <typeinfo>
using namespace std; 

template <typename T> 
void Display(T value) {
    if (typeid(value) == typeid(int)) {
        cout << "Displaying int : " << value << endl;
    }
    else if (typeid(value) == typeid(float)) {
        cout << "Displaying float: " << value << endl;
    }
    else {
        cout <<"Unknown type!" << endl;
    }
}

template <> 
void Display<char>(char value) {
    cout << "Displaying char '" << value << "' as ASCII: " << (int)value << endl;
}

int main () {
    char c = 'A';
    int a =10; 
    float b = 5.5;

    Display(a);
    Display(b);
    Display(c);
}