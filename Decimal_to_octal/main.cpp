#include <iostream>

using namespace std;

int main()
{
    long int decnum, rem, quot;
    int i = 1, j, octnum[100];
    cout << "Decimal Number: ";
    cin >> decnum;
    quot = decnum;
    while(quot != 0)
    {
        octnum[i++] = quot % 8;
        quot = quot / 8;
    }
    cout << "Octal Value: ";
    for (j = i-1; j > 0; j--)
    {
        cout << octnum[j];
    }
    return 0;
}
