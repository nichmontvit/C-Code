#include <iostream>
using namespace std;

int main(){
    int n, i, first_term = 2, second_term = 1, term_n;
    cout << "Enter number: ";
    cin >> n;

    if(n == 1){
        cout << "\n" << 2 << "\n";
    }

    else if(n == 2)
    {
        cout << "\n" << 2 << "\n" << 1 << "\n";
    }

    else if (n > 2)
    {
        cout << "Lucas series for " << n << " terms" << "\n" << first_term << "\n" << second_term << "\n";
        for (int i = 0; i < n; i++)
        {
            term_n = first_term + second_term;
            cout << term_n << "\n";
            first_term = second_term;
            second_term = term_n;
        }
    }

    return 0;
}
