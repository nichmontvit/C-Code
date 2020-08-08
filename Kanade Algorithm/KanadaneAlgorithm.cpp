#include <iostream>
#include <algorithm>
using namespace std;

int maxSum(int* arr, int n){
    int maximum = 0, current_max = 0;
    for (int i = 0; i < n; i++)
    {
        current_max = max(arr[i], current_max + arr[i]);
        maximum = max(maximum, current_max);
    }
    return maximum;
}

int main() {
    int* a1, dim;
    cout << "Array length: ";
    cin >> dim;
    a1 = new int[dim];
    for(int i=0; i<dim; i++)
    {
        cout << "array[" << i << "<]: ";
        cin >> a1[i];
    }
    cout << "Max sum: " << maxSum(a1,dim) << "\n";

    return 0;
}
