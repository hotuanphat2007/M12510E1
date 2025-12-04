#include <iostream>
using namespace std;

template <typename T>
void display(T value) {
    cout << "Displaying " << typeid(T).name() << ": " << value << endl;
}

template <>
void display<char>(char value) {
    cout << "Displaying char '" << value << "' as ASCII: " << int(value) << endl;
}

int main() {
    
    display('A');
    display(10);
    display(3.14f);

    return 0;
}
