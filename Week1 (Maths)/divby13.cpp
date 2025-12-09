#include <iostream>
#include <string>
using namespace std;

bool div(string s){
    int n = stoi(s);

    if(n%13==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    cout<<div("26");
}