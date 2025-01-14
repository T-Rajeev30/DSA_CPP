#include<iostream>
using namespace std;

void sortedSum(int arr[] , int size ){
    
    for (int i = 0; i < size; i++)
    {
        int squared = arr[i]*arr[i] ;
        swap( arr[i] , squared);
    }
    for (int i = 0; i < size ; i++)
    {
        for (int j = 0; i < size-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
            }   
        }
    }
}
void printArray( int arr[] , int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }   
}


int main()
{
    int num[5] = { -4 , -1 , 0 , 3, 10};
    int n = 5;
    sortedSum(num , 5);
    printArray(num , 5);
    return 0 ;
}