#include <iostream>
using namespace std;
int main()
{

    int num = 1 ; 
    char ch = '1';

    cout << endl;
    switch (ch)
    {

    case 1:
        cout << "First " << endl;
        cout << "First Number" << endl;
        break;
    case '1':
        switch (num)
        {
        case 1:
            cout << "the code is exectuted in double switch" << endl;
            break;
        }
        cout << "second " << endl;
        break;
    default:
        cout << "There has been no thing to do " << endl;
        break;
    }
    return 0;
}