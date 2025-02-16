#include<iostream>
using namespace std;

void selectionSort( int arr[] , int n );
int main(){ 
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr , n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
void selectionSort ( int arr[] , int n ){
    for (int i = 0; i < n-1 ; i++){
        int minIndex= i ;
        for (int h = i+1;  h < n ; h++){
            if (arr[h] < arr[minIndex]){
                minIndex = h;
            }
            
        }
        swap( arr[minIndex] , arr[i]);        
    }
    
}