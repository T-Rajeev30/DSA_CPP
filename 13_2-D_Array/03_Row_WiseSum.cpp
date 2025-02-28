#include<iostream>
using namespace std;

void printSum( int arr[][3] , int row , int col){
    for (int row = 0; row < 3; row++)
    {   int sum = 0 ; 
        for (int col= 0; col < 31 ; col++)
        {
            sum+=arr[row][col];
        }
        cout << sum << " ";
    }
}

int main()  
{
    int arr[3][3]; 
    cout << "ENter the Element" << " ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j]  ;
        }   
    }

    for (int i = 0; i < 3; i++)
    {
        for (int h= 0; h < 3; h++)
        {
            cout << arr[i][h] << " " ;
        }
        cout << endl ; 
    }
    
    printSum(arr , 3 ,3 );
     return 0 ;
     
}