#include<iostream>
using namespace std;

void printArray( int arr[] , int s){
    cout << "Printing the array" << endl ;
    for (int i = 0; i < s; i++)
    {
        cout <<" " << arr[i] << " "<< endl;
    }
    
}


int main()
{
    int v[10] = {9,54,454,54,654,564,64,6,4};
    int s ;
    printArray( v , s= 10 ) ;
    return 0 ;
}