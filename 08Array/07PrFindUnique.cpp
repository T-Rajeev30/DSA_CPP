#include<iostream>
using namespace std;

int findunique( int arr[] , int size ){
    int ans  = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    cout << ans << " " ; 
    return ans ;
}
int main()
{
    int arr[5] = { 3,5,2,5,3};
    findunique( arr , 5 );
     return 0 ;
}