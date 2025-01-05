#include <iostream>
using namespace std;
int factorial(int n){
    if (n ==0 || n==1){
        return 1;
    }
    else {
        return factorial(n-1)*n;
    }
}
int main(){
    int x;
    cout<<("Enter the whose factorial you want");
    cin>>x;
    cout<< ("%d" , factorial(x));
}