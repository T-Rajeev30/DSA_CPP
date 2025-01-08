#include<iostream>
using namespace std;
int main()
{

    int ch = 2 ;
    cout << endl ;
    switch (ch){
    case 1 :
        cout << "First " << endl ; 
        cout << "First Number" << endl ;
        break;
    case 2 : 
          cout << "second " << endl ; 
          break;
    default:
        cout << "There has been no thing to do " << endl;
        break;
    }
    return 0 ; 
}