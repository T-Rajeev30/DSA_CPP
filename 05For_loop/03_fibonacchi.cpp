#include<iostream>
using namespace std;
int main()
{   
    int n ;
    cout << "Enter the number for fibonacci series" << endl ;
    cin >> n ;
    int a = 0 ;
    int b = 1 ;

    cout << a << " " <<endl<< b <<"" << endl;
    for (int i = 1; i <=n; i++)
        {
            int nextTerm = a+b ;
            cout << nextTerm << endl ; 
            a = b ;
            b = nextTerm ; 

        }   
}