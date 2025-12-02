#include <iostream>
using namespace std;

class Counter
{
private:
    int val;
public:
    Counter(int v) : val(v) {}
    Counter &operator++()
    {
        val++;
        return *this;
    }
    Counter &operator++(int)
    {
        Counter temp = *this;
        val++;
        return temp;
    }
    void print()
    {
        cout << val << endl;
    }
};
int main()
{
    Counter c(5);
    c++;
    c.print();
    ++c;
    c.print();

}