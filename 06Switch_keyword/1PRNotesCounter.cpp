#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the amount of money" << endl ;
    int n ;
    cin >> n  ;
    int notes [4] = { 100 , 50 , 20 , 1 } ;

    for (int i = 0; i < 4; i++)
    {
        switch (i)
        {
        case 0:
            int count ; 
            count = n  / 100 ; 
            cout << "You need " << count << "  100 notes " << endl ;
            n %= 100 ;     
            break;  
        case 1:
            count = n  / 50 ; 
            cout << "You need " << count << "  50 notes " << endl ;
            n %= 50 ;  
            break;     
        case 2:
            count = n  / 20 ; 
            cout << "You need " << count << "  20 notes " << endl ;
            n %= 20 ;       
            break;  
        case 3:
            count = n  / 1 ; 
            cout << "You need " << count << "  1 notes " << endl ;
            n %= 1 ;       
            break;  
                  
        default:
            break;
        }
    }
    
     
     return 0 ;

}