#include <iostream>
using namespace std;
void funB(int n);
void funA(int n){
    if (n>0){
        cout<<("%d", n);
        funB(n-1);
    }
}
void funB(int n){
    if(n>1){
        cout<<("%d",n);
        funA(n/2);
    }
}
int main(){
    funA(20);
}