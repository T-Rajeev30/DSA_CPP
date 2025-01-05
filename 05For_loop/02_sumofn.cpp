#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++) // Loop should start from 1 and go to n.
    {
        sum += i;
    }

    cout << "Sum of first " << n << " numbers is: " << sum << endl;

    return 0; // Return statement to indicate successful program execution.
}
