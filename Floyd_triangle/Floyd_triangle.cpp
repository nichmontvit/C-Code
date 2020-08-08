#include <iostream>
using namespace std;

int main()
{
    int range,i,j, k = 1;
    cout << "Enter the range(lines): ";
    cin >> range;
    cout << "\nFloyd's Triangle:\n";
    for(int i = 1; i <= range; i++)
    {
        for(int j = 1; j <= i; j++, k++)
        {
           cout << k << " ";
        }
        cout << "\n";
    }
    return 0;
}

