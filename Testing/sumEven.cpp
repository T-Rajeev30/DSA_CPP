#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Enter a positive integer: ";
    cin >> n;
    int i = 1;
    int sum = 0;

    while (i <= n) {
        sum += (2 * i); 
        i++;
    }

    cout << "Sum of the first " << n << " even numbers is " << sum << endl;
    return 0;
}
