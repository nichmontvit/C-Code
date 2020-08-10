#include <iostream>
using namespace std;

int main()
{
    short swap_check = 1;
    int a1[] = {30,24,48,19,22};
    int size = sizeof(a1)/sizeof(a1[0]);
    int num;

    for(int i = 0; (i < size) && (swap_check == 1); i++)
    {
        swap_check = 0;
        for(int j = 0; j < size - 1; j++)
        {
            if(a1[j] > a1[j + 1])
            {
                swap_check = 1;
                swap(a1[j], a1[j + 1]);
            }
        }
    }

    cout << "\nSorted Array: ";
    for(int i = 0; i < size; i++)
    {
        cout << a1[i] << " ";
    }
    cout << "\n";
    return 0;
}
