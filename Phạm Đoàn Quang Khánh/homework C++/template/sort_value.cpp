#include<iostream>
using namespace std;
template<typename T>
void sortnumber(const T &a,const T &b)
{
    if (a<b)
    {
        cout<<"2 so theo thu tu tang dan la: "<<a<<", "<<b<<endl;
    }
    else if(a>b)
    {
        cout<<"2 so theo thu tu tang dan la: "<<b<<", "<<a<<endl;
    }
    else
    {
        cout<<"2 so "<<a<<" va "<<b<<" bang nhau";
    }
}
int main()
{
    sortnumber<int>(9,4);
    sortnumber<float>(3.14, 4.19);
    return 0;
}