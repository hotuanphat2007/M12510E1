#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, original = num, sum=0;
    int digits = 0, temp = num;
    cout << "Enter the number: ";
    cin >> num;
    while (temp !=0)
    {
        digits++;
        temp /=10;
    }
    temp = num;

    while (temp !=0)
    {
        int digit = temp %10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    if (sum == original)
    {
        cout << num << " is an Armstrong number.";
    }
    else 
    cout<< num << " is not an Armstrong number.";
    return 0;
}