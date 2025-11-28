#include <string>
#include <iostream>
using namespace std;

int sumof(int n){
    int result=0;
    //conversion to string
    string s=to_string(n);
    //char loop and conversion to int
    for(char c:s){
        result+= c - '0'; //make sure it is '0

    }

    return result;
}

int main(){
    int res=sumof(312);
    cout<<res;
}