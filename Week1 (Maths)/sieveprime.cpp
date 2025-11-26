#include <vector>
#include <iostream>

using namespace std;

void sieve(int n){
    //create an array of all numbers with true values
    vector<bool> prime(n + 1, true);

    //keeping 0 and 1 as false
    prime[0]=prime[1]=false;

    //creating loop which runs till square root
    for(int i=0; i*i<=n; i++){
        if(prime[i]==true){
            for(int p=i*i; p<=n; p+=i){
                prime[p]=false;
            }
        }
    }

    for(int k=0; k<=n;k++){
        if(prime[k]==true){
            cout<<k<<" ";
        }
    }
}

int main(){
    int num;
    cout<<" primes till: ";
    cin>>num;
    sieve(num);
}