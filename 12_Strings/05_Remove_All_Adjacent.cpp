#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "bbacaa";
    int n = s.size();

    for (int i = 0; i < n-1; i++)
    {
        cout << s[i] ;
        
        if( s[i] == s[i+1] ){
            s.erase(i , i+1);

        }
        else{
            cout << s[i]<< endl;
        }


        
    }
    
     return 0 ;
}