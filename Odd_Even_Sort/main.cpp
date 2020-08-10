#include <iostream>
using namespace std;

void oddEvenSort(int arr[], int n)
{
    bool isSorted = false;
    while(!isSorted)
    {
        isSorted = true;

        //bubble sort on odd indexed element
        for(int i = 1; i <= n - 2; i = i + 2)
        {
            if(arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]),
                isSorted = false;
            }
        }

        //bubble sort on even indexed element
        for(int i = 0; i <= n - 2; i = i + 2)
        {
            if(arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]),
                isSorted = false;
            }
        }
    }
}

int main()
{
    int arr[] = {15, 11, 27, 19, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    oddEvenSort(arr, size);
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] << " ";
    }
    return 0;
}
