#include<iostream>
using namespace std;


int power( int a , int b){
    int ans = 1 ; 
    for (int  i =  1 ;  i <= b; i++)
    {
        ans = ans*a ;  

    }
    cout << "the ans is " << ans << endl;
    return ans ;
    
}

int main()


{
    int a, b ;
    cout <<" Enter two number" << endl ;
    cin >> a >> b ;
    power(a , b);
     return 0 ;
}