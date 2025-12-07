#include <iostream>
using namespace std;
class Counter {
private:
    int value;

public:
    Counter(int v = 0) : value(v) {}
    Counter& operator++() {
        ++value;
        return *this;
    }
    Counter operator++(int) {
        Counter old(*this);
        value++;
        return old;
    }
    int get() const { return value; }
};
int main() {
    Counter c1(5);
    ++c1;
    cout << "After ++c1: " << c1.get() << "\n";
    c1++;
    cout << "After c1++: " << c1.get() << "\n";
return 0;
}
