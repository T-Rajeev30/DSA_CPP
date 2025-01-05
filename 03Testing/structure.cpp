#include<iostream>
using namespace std; 

struct Rectangle{
    int length ;
    int breadth;
    string color;
}r1;

int main(){
    r1 = {10,50,"red"};     
    cout<< r1.length;
}