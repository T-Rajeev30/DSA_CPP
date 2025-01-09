#include<iostream>
using namespace std;


void ReverseArr( int arr[] , int size ){
    for (int i = 0; i <= size/2 ; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size-i-1] ;
        arr[size-i-1] = temp;
    }
     
}

int main()
{
    int arr[10] ={ 3,4,5,6,7,8,9,1,12,23};
    int size = 10 ;
    ReverseArr( arr , size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0 ;
}