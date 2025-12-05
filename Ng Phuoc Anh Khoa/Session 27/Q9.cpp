#include <iostream> 
using namespace std; 

template <typename T> 
class Compare {
private:
    T a,b;
public: 
    void setVal(T x,T y) {
        a = x;
        b = y;
    }
    T CompareVal() {
        if(a > b) {
            return a;
        }        
        else {
            return b;
        }
    }
};

int main () {
    Compare<int> compare1;
    compare1.setVal(10,5);
    cout << "So lon nhat la: " <<compare1.CompareVal() << endl;
    return 0;
}