#include<iostream>
using namespace std;

void PrintArr(int arr[] , int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    cout<< endl;
}

void sortOne( int arr[] , int size ){

    int left = 0  ,  right = size - 1 ;
    while (left < right )
    {
        while ( arr[left] == 0)
        {
           left++ ;
        }
        while (arr[right] == 1)
        {
            right--;
        }
        if (arr[left] == 1 && arr[right] == 0 && left<right)
        {
            
        swap(arr[left] , arr[right]);
        left++;
        right-- ;               
        }
        

        
    }
    
}

int main()
{
    int arr[8] = { 0, 1, 1, 0, 0 , 1 , 0 ,0};
    int n = 8 ;
    sortOne ( arr , n ) ;
    PrintArr( arr , n  ) ;
    
    return 0 ;
}