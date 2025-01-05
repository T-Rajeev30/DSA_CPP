#include<iostream>
using namespace std;
int main()
{
     for (int i = 0; i < 5; i++){
        for (int g= 0; i < 5 ; g++)
        {
            if(i+g == 10 )
            {
                break;
            }
            cout<< i << "   " << g << endl;  
        }
        
     }
     
}