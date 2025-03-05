#include<iostream>
using namespace std;
int main()
{
    int num = 5 ;

    cout<< num << endl ;

    int *p = &num ;
    cout<< "before " << num << endl ;
    (*p)++ ;
    cout << "After " << num << endl ;
    
    int *q = p ;
    cout<< p << " - " << q << endl ;
    cout << *p << *q << endl; 


    // important concept 
    int i = 3 ; 
    int *t = &i ;
    cout << *t++ << endl ; 

    return 0 ;
}