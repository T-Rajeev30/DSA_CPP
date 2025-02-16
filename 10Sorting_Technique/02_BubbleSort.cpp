#include<iostream>
using namespace std;
void BubbleSort ( int arr[] , int n ){

    for (int i = 0; i < n; i++)
    {
        for (int h = 0; h< n-1; h++)
        {
            if (arr[h] > arr[h+1])
            {
                swap(arr[h] , arr[h+1]);
            }
            
        }
        
    }
}
int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr , n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
