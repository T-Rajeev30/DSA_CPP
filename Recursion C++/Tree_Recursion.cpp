#include <iostream>
using namespace std;
void fun(int n){
    if(n >0){
        cout<<("%d",n);
        fun(n-1);
        fun(n-1);
    }    
}

int main(){
    fun(3);
}