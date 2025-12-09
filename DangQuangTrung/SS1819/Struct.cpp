#include <iostream>
using namespace std;
struct Book
{
    char name[50];
    char author[20];
    float price;
};
struct Book ds[100];
int count=0;

void addbook()
{
    
    int n;
    cout << "Enter number of books: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name: "; cin >> ds[count].name;
        cout << "Enter author: "; cin >> ds[count].author;
        cout << "Enter price: "; cin >> ds[count].price;
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