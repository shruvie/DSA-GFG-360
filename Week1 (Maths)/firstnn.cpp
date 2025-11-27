#include <iostream>
using namespace std;

int natnum(int n){
    int sum= n*(n+1)/2;
    return sum;
};

int main(){
    int n = natnum(20);
    cout<< "Sum of all natural numbers: "<< n;
}