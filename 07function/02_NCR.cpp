#include<iostream>
using namespace std;


int factorial(int n ){
    int fact = 1  ;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact ;   
}
int NCR( int n , int r ){
    float ans ;
    int num ,denom ;
    num = factorial( n);
    denom = factorial(r) *factorial(n-r);
    return num/denom;
}


int main()
{
    cout << NCR(25 , 24);
}