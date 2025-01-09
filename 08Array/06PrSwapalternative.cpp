#include<iostream>

using namespace std;

void swapArray( int arr[] , int size  ){
    for (int i = 0; i < size ; i= i+2 )
    {
        if ( i+1 < 5)
        {
            swap(arr[i] , arr[i+1]);
        }
    }
}
void printArray( int arr[] , int  size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "  ;
    }
}

int main()
{
    int arr[5] = {2, 4,5 ,6,3} ;
    int arr2[10]  = { 2,3,33,4,5,2,6,3,46, 10};
    swapArray (arr , 5);
    printArray( arr , 5); 

    swapArray (arr2 , 10);
    printArray( arr2 , 10 ); 

    
    return 0 ;
}