#include <iostream>
using namespace std;

int mod_multiplication(int a, int b, int m){
    return ((a%m)*(b%m)%m);
}
int main(){
    int a=4;
    int b=5;
    int m=3;

    cout<<"The result: "<<mod_multiplication(a,b,m);
}