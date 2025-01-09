#include<iostream>
using namespace std;



bool linearSearch (int arr[] , int n , int number ){
    for (int i = 0; i < n; i++)

    {
        if (arr[i] == number)
        {
            return true; 
        }
        
    
    }
    return 0 ;

}


int main()
{   int number = 60;
    int ArrNumb[10 ] = {2,3,4,5,6,7,8,7,6,5};
    int n = 10 ;
    bool found = linearSearch(ArrNumb , n , number);
    if (found)
    {
        cout<< "The desired number is there in the array" << endl;
    }else
    {
        cout<< "The desired number is not there in the array" << endl;
    }
    
    
    return 0 ;
}