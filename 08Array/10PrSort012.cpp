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
    int left = 0  , mid = 0 , right = size-1 ;

    while (mid <= right)
    {
        if (arr[mid] ==  0  )
        {
            swap(arr[mid] , arr[left]);
            left++ ;
            mid++ ;

        }else if (arr[mid] == 1)
        {
            mid++;
        }else if (arr[mid] == 2)
        {
          swap(arr[mid] , arr[right]);
          right-- ;
        }
    }
}

int main()
{
    int arr[9] = { 0, 2, 2, 1, 0 , 1 , 1 ,0 , 2};
    int n = 9 ;
    sortOne ( arr , n ) ;
    PrintArr( arr , n  ) ;
    return 0 ;
}