#include <iostream>

using namespace std;

int interpolationSearch(int arr[], int n, int x)
{
    int lo = 0, h1 = (n-1);
    while(lo <= h1 && x >= arr[lo] && x <= arr[h1])
    {
        if(lo == h1)
        {
            if(arr[lo] == x) return lo;
            return -1;
        }

        int pos = lo + (((double)(h1-lo)/(arr[h1]-arr[lo]))*(x-arr[lo]));

        if(arr[pos] == x) return pos;
        if(arr[pos] < x) lo = pos + 1;
        else h1 = pos - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {10, 12, 13, 16, 18, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 13;
    int index = interpolationSearch(arr, size, x);
    if(index != -1)
    {
        cout << "Element found at: " << index << "\n";
    }
    else
    {
        cout << "No Element Found";
    }
    return 0;
}
