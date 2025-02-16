// Implementation of list is through double linked list 
#include<list>
#include<iostream>
using namespace std;
int main()
{
    list <int> l ;

    list <int> n(5, 100) ;
    cout << "Printing N" << endl;
    for (int i:n)
    {
        cout<<i <<" ";
    }cout<<endl;


    
    l.push_back(1);
    l.push_front(5);
    

    for (int i:l)
    {
        cout<<i <<" ";
    }
    cout<< endl;
    l.erase(l.begin());
    cout<< "after erase" << endl ;

    for (int i:l)
    {
        cout<<i <<" ";
    }
    
}