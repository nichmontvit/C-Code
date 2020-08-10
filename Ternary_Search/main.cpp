#include <iostream>
using namespace std;

int ternarySearch(int i, int size, int key, int arr[])
{
    if(size >= 1)
    {
        // find mid1 and mid2
        int mid1 = 1 + (size - 1) / 3;
        int mid2 = size - (size -1) / 3;

        // check if key is present at any mid
        if(arr[mid1] == key)
        {
            return mid1;
        }

        if(arr[mid2] == key)
        {
            return mid2;
        }

        // if key is not in mid, then check other regions of the arrays and repeat the process
        if(key < arr[mid1])
        {
            return ternarySearch(1, mid1 - 1, key, arr);
        }

        else if(key > arr[mid2])
        {
            return ternarySearch(mid1 + 1, size, key, arr);
        }

        else if(key > arr[mid2])
        {
            return ternarySearch(mid1 + 1, size, key, arr);
        }

        else
        {
            return ternarySearch(mid1 + 1, mid2 - 1, key, arr);
        }
    }

    return -1;
}

int main()
{
    int l, size, p, key;
    int a1[] = {1,2,3,4,5,6,7,8,9,10};
    size = sizeof(a1) / sizeof(a1[0]);
    l = 0;
    key = 5;
    p = ternarySearch(l, size, key, a1);
    cout << "Index of: " << key << " located at! " << p << "\n";
    return 0;
}
