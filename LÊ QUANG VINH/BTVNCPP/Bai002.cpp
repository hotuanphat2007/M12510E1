#include <iostream>
using namespace std;

class Box
{
private:
    int length = 0;
    int width = 0;
    int height = 0;
public:
    Box(int l, int w, int h) : length(l), width(w), height(h) {}
    bool operator==(Box &b) const
    {
        return length == b.length && width == b.width && height == b.height; 
    }
    bool operator<(Box &b) const
    {
        return length < b.length || width < b.width || height < b.height;
    }
};
int main()
{
    Box b1(2, 3, 4), b2(4, 2, 3);
    if(b1 == b2)
    {
        cout << "true";
    }else
    {
        cout << "false";
    }
    cout << endl;
    if(b1 < b2)
    {
        cout << "true";
    }else
    {
        cout << "false";
    }
    return 0;
}