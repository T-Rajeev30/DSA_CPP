#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {0 , 0 , 1, 0, 1, 1};
    int n = 6;

    int zeroCount= 0 ; 

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
    }
        
        for (int i = 0; i < n; i++)
        {
            if (i<zeroCount)
            {
                arr[i] = 0 ;
            }
            else{
                arr[i] = 1 ;
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            cout<< arr[i] << " " ;
        }
    
    return 0 ;
}