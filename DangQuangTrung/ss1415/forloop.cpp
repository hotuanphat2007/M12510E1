#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int row;
    cout << "Enter the row: "; cin>>row;
    for (int i=1; i <= row ; i++)
    {
        for (int space = 1; space <= row -i ; space++)
        {
            cout << "  ";
        }
        for (int star = 1 ; star <= (2*i-1); star++)
        {
            if (star == 1 || star == (2*i-1) || star ==row)
            {
                cout << "* ";
            }
            else
            cout << "  ";
            
        }
        cout << endl;
    }
    
    return 0;
}