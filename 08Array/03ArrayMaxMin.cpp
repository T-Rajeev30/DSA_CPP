#include<iostream>
using namespace std;


int getMax(int num[] , int n){
    int max = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max) 
        {
            max = num[i]; 
        }
    }
    cout<< max <<" is the maximum value "<<endl ;
}


int getMin(int num[] , int n){
    int min = INT8_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min) 
        {
            min = num[i]; 
        }

    }
    cout<< min <<" is the minimum value "<<endl ;
}



int main()
{

    int arr[10 ] = {4,3,8,9,8,2,34,2,4,5} ;
    int n = 10 ;
    getMax( arr , n );
    getMin (arr , n);
     return 0 ;
}