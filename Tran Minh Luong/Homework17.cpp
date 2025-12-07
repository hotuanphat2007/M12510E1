#include <iostream>
using namespace std;

class Box {
private:
    double l, w, h;

public:
    Box() : l(0), w(0), h(0) {}
    Box(double L, double W, double H) : l(L), w(W), h(H) {}

    double volume() const { return l * w * h; }

    bool operator==(const Box& other) const {
        return volume() == other.volume();
    }
    bool operator<(const Box& other) const {
        return volume() < other.volume();
    }
};

int main() {
    Box b1(2, 3, 4), b2(4, 2, 3);

    cout << "b1 volume = " << b1.volume() << "\n";
    cout << "b2 volume = " << b2.volume() << "\n";

    if (b1 == b2) cout << "Equal volume\n";
    else cout << "Not equal volume\n";

    if (b1 < b2) cout << "b1 has smaller volume than b2\n";
    else cout << "b1 is not smaller than b2\n";

    return 0;
}
