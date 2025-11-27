#include <iostream>
using namespace std;

int binexpo(int a, int b, int m){
    int res = 1;
    while(b > 0){
        if(b & 1){
            res = (res * a) % m;
            b--;
        } else{
            a=(a*a)%m;
            b/=2;
        };
        
    };
    return res;
}

int main(){
    int a=3,b=2,m=4;
    int res=binexpo(a,b,m);
    cout<<"the result: "<< res;
    return 0;
}