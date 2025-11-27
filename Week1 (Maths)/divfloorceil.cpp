#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> floorceildev(int a,int b){
    int floordiv= a/b;
    int ceildev=a/b;

    vector<int> res;
    //for floor div
    if((a<0)!=(b<0) && a%b!=0){
        floordiv--;
    };
    res.push_back(floordiv);

    //for ceil dev
    double nm = (double)a/b;
    int ceilres = (int)std::ceil(nm);
    res.push_back(ceilres);

    return res;
};

int main(){
    int a=-7,b=2;
    vector<int> rin= floorceildev(a,b);
    cout<< rin[0]<<" "<<rin[1];
}