#include <iostream>

using namespace std;

int main()
{
    int decimal_value = 0, hexArray[8], i = 0;
    char hex_values[] = "0123456789ABCDEF";
    cout << "Decimal number: " << "\n";
    cin >> decimal_value;

    while(decimal_value > 15)
    {
        hexArray[i++] = decimal_value % 16;
        decimal_value /= 16;
    }
    hexArray[i] = decimal_value;
    cout << "Hexadecimal value: ";
    while(i >= 0)
    {
        cout << hex_values[hexArray[i--]];
    }
    cout << "\n";
    return 0;
}
