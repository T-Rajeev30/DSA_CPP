#include<iostream>
using namespace std;

void insertionSort (int arr[] , int n){
    for (int i = 0; i < n; i++)
    {   
        int temp = arr[i];
        int h  = i -1 ;
        for (; h>= 0  ; h--)
        {
            if (arr[h] > temp)
            {
                //shift 
                arr[h+1] = arr[h] ;
            }else
            {
                break;
            }
            
        }
        arr[h +1 ] = temp ; 
        
    }
    
}



int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr , n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
