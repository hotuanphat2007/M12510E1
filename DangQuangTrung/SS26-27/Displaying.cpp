#include <iostream>
using namespace std;

template <typename T>
void display(T value) 
{
    cout << "Displaying: " << value << endl;
}

template <>
void display<char>(char c) 
{
    cout << "Displaying char '" << c << "' as ASCII: " << (int)c << endl;
}

int main() 
{
    display('A');    
    display(10);     
    display(3.14f);  

    return 0;
}
