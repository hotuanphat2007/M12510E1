#include <iostream>
using namespace std;
union detail
{
    string author;
    string price;
};
struct Book
{
    string name;
    int detailtye;
    detail unio;

};
struct Book ds[100];
int count=0;

void adddetail()
{
    cout << "Enter author: "; cin >> ds[count].author;
    cout << "Enter price: "; cin >> ds[count].price;
}
void addbook()
{
    
    int n;
    cout << "Enter number of books: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name: "; cin >> ds[count].name;
        count ++;
    }
    
}

void max()
{
    if (count == 0)
    {
        cout << "No books found!\n";
        return;
    }

    int idx = 0;      // lưu vị trí của sách giá cao nhất
    float maxPrice = ds[0].price;

    for (int i = 1; i < count; i++)
    {
        if (ds[i].price > maxPrice)
        {
            maxPrice = ds[i].price;
            idx = i;
        }
    }

    cout << "\n======= Highest price book =======\n";
    cout << "Name: " << ds[idx].name << endl;
    cout << "Author: " << ds[idx].author << endl;
    cout << "Price: " << ds[idx].price << endl;
}
int main()
{
    addbook();
    max();

    return 0;
}