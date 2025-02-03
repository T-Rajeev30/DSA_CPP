#include<iostream>
using namespace std;
int main()
{    int num = 38 ;
    cout <<  mySqrt(num) << endl ;
}
int mySqrt(int x) {
        if ( x == 0 ){
            return 0 ;
        }
        else if( x== 1) {
            return 1 ;
        }else{
      return  binarySearch(x);
}}
long long int binarySearch ( int x ){
        int s = 0 ; 
        int e = x-1 ;
        long long int mid =  s + ((e-s)/2);
        long long int ans = 0 ;
        while( s<= e ){
            long long int square = mid*mid;
            if( square == x  ){
                return mid ;
            }
            else if ( square < x ){
                s = mid +1 ;
                ans = mid  ;
            }
            else {
                e =  mid -1 ;
            }
        mid =  s + ((e-s)/2); 
        }
        return ans;
    }

int morePrecesion ( int num , int precision , int tempSol ){
    double factor = 1 ;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
     factor = factor/10 ;
     for (double  j = ans ; j < precision;  j++)
     {
        ans = j ;
     }
     return ans ;
}