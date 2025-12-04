#include <iostream>
using namespace std;
void findminmax(int arr[], int size)
{   
    int max = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Max element is: "<< max<<endl;
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
    
    cout << "Sumary of elements "<< sum << endl;
    findminmax(number,size);
    return 0;
}