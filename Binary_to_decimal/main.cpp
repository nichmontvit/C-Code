#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int binary_number;
    cout << "Binary Number: ";
    cin >> binary_number;
    int decimal_number = 0, i = 0, c;
    while (binary_number != 0)
    {
        c = binary_number % 10;
        decimal_number = decimal_number + c * pow(2,i);
        i++;
        binary_number = binary_number / 10;
    }
    cout << "Decimal Number: " << decimal_number << "\n";
    return 0;
}
