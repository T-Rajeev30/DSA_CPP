#include<iostream>
using namespace std;

bool ispresent( int arr[][3], int target , int row , int column){
          for (int row = 0; row < 3 ; row++)
    {
        for (int column = 0 ; column <3 ; column++)
        {
            if( arr[row][column] == target ){
                return 1;
            };
        }
    }
    return 0;
    }

int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j]  ;
        }
        
        
    }

    cout << "Enter the element to search" << endl;
    int target ;
    cin>> target;


    if(ispresent ( arr , target , 3 , 3) ){
        cout<< "Element Found";
    }
    else{
        cout<< "Element not Found";
    }



     return 0 ;
}