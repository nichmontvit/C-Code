#include <iostream>

using namespace std;

void cocktailSort(int* arr, int n)
{
    bool swapped = true;
    int start = 0;
    int end = n - 1;

    while(swapped)
    {
        swapped = false;
        for(int i = start; i < end; i++)
        {
            if(arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        if(!swapped)
        {
            break;
        }

        swapped = false;
        --end;

        for(int i = end -1 ; i >= start; --i)
        {
            if(arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        ++start;
    }
}

int main()
{
    int a1[] = {3,1,5,2,4};
    int dim = sizeof(a1) / sizeof(a1[0]);
    cocktailSort(a1, dim);
    cout << "sorted array: ";
    for (int i = 0; i < dim; i++)
    {
        cout << a1[i] << " ";
    }

    return 0;
}
