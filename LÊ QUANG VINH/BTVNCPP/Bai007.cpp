#include <iostream>
using namespace std;

template <typename T>
void display(T x)
{
    cout << "Displaying " << typeid(T).name() << " : " << x << endl;
}

template <>
void display<char>(char x)
{
    cout << "Displaying char '" << x << "' as ASCII: " << int(x) << endl; 
}

int main()
{
    char a; cin >> a;
    int b; cin >> b;
    float c; cin >> c;
    
    display(a);
    
    display(b);

    display(c);

    return 0;
}
