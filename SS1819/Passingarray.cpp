#include <iostream>
using namespace std;

void update(int arr[], int size, int i)
{
    arr[2]= 99;
    cout << arr[i]<< " ";
}
int main()
{
    int number[100], sum = 0, size;
    cout << "Enter the numbers of element: ";
    cin >> size;
    cout<< "Enter the element: ";
    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
        sum += number[i];
    }
    for (int i = 0; i < size; i++)
    {
        update(number,size,i);
    }
    
    return 0;
}