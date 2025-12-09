#include <iostream>
using namespace std;

int main()
{
    int arr[10][10], sum = 0, size;
    cout << "Enter row of matrix: \n";
    cin >> size;

    cout<< "Enter the element: ";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++ )
        {
            cin >> arr[i][j];
        }
    }
    cout << "\nSquare matrix:\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " | ";
        }
        cout << endl;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++ )
        {
            sum += arr[i][j];
        }
    }
    cout << "sum: "<<sum;
    
    
    return 0;
}