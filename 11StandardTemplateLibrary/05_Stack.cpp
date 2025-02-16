#include<iostream>
#include<stack>

//L I F O 

using namespace std;
int main()
{
    stack<string> s ;

    s.push("Rajee");
    s.push("v");
    s.push("Tiwari");

    cout<< "Top Element --> " << s.top() <<endl ;  
    s.pop();

    cout<< "Top Element --> " << s.top() <<endl;


    cout<< "Size of Stack --> " << s.size() <<endl;
    cout<< "Empty or Not --> " << s.empty() <<endl;
    
}