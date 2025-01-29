#include<iostream>
using namespace std;

int binarysearch(int arr[] , int size, int key){
    int start = 0 ;
    int end = size - 1 ;
    int mid = (start+end)/2 ;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid ;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1 ;
        }
        else
        {
            end = mid - 1 ;
        }
        mid = (start+end)/2 ;

    }
    return -1 ; 
}



int main()
{
    int even[8] = { 2, 4, 6, 8, 10, 12, 14, 16};
    int odd[5] = { 1, 3, 5, 7, 9};

    
    int index = binarysearch(even , 8 , 16);
    cout <<" Index of 16 is" << index << endl;
    return 0 ;
}


/// int max  id  2^31 -1 
// so  start = 2^31 -1 
// and end = 2^31 -1 
// mid = will be more than the range of int 


// so mid can be written as 

// mid = s + (e-s)/2