#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> v ;
    

    // all 5 element will be assinged by 1 

    vector<int> a(5, 1);

    // coping a in vector v 
    cout << "Printing a " << endl ;
    for (int i:a)
    {
        cout<< i <<" ";
    } cout << endl ;
    
    
    cout << "Capacity -->" << v.capacity() << endl;
    
    v.push_back(1);

    cout << "Capacity -->" << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity -->" << v.capacity() << endl;
    
    v.push_back(3);
    cout << "Capacity -->" << v.capacity() << endl;
    cout << "Size -->" << v.size() << endl;



    cout << "Front -->" << v.front() << endl;
    cout << "Back -->" << v.back() << endl;


    cout << "Before Pop" << endl ;
    for (int i:v)
    {
        cout<< i <<" ";
    } cout << endl ;
     
    v.pop_back() ;

    cout << "After Pop" << endl ;
    for (int i:v)
    {
        cout<< i <<" ";
    } cout << endl ;
    
    /// size is zero but the capacity is zero 
    v.clear();


}