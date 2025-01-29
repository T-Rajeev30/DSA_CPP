
#include<iostream>
using namespace std;
int main()
{
    int sum[6] ={1,7 ,3,6,5,6 };
    int number = pivotIndex( sum , 6);
    cout << number << endl;
    return 0 ;
};
int pivotIndex(int nums[] , int n ) {
     int s = 0 , e = n-1;
     int mid = (s+(e-s)/2) ;
     int lsum = 0 , rsum = 0;
     int pindex = -1;
     while( s<e ){
        for( int i= 0  ; i < n ; i++){
            if( i < mid ){
                lsum = nums[i];
            }
            else{
                rsum = nums[i];
            }
        }
        if(lsum == rsum ){
            return mid ;
        }
        else {
            mid=+1 ;
            pindex = mid;
        }
        mid = s + ((e-s)/2);
     }
    return pindex ;  
}