#include<iostream>
using namespace std;

int firstOccurance ( int arr[] , int size , int k){
    int s= 0 , e= size -1 ;
    int mid = s+ (e-s)/2;
    int ans = -1;
    while (s <= e ){
        int mid = s + (e - s) / 2;  // Update mid inside the loop

    if (arr[mid] == k)
    {
        ans = mid;
        e = mid -1 ;
    }
    else if ( k > arr[mid])
    {
        s = mid +1 ;
    }else if ( k < arr[mid])
    {
        e = mid -1 ;
    }
    }
    return ans ;
}
int lastOccurance ( int arr[] , int size , int k){
    int s= 0 , e= size -1 ;
    int mid = s+ (e-s)/2;
    int ans = -1;
    while (s <= e ){
        int mid = s + (e - s) / 2;  // Update mid inside the loop

    if (arr[mid] == k)
    {   ans = mid;
        s = mid + 1 ;
    }
    else if ( k > arr[mid])
    {
        s = mid +1 ;
    }else if ( k < arr[mid])
    {
        e = mid -1 ;
    }
    }
    return ans ;
}



int main()
{
    int even[5] = { 1, 2, 3, 3, 5} ;
    cout << "first occurance of 3 is " << firstOccurance(even , 5 , 3)<<endl;
    cout << "last occurance of 3 is " << lastOccurance(even , 5 , 3) << endl;
     return 0 ;
}