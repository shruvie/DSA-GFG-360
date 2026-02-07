#include <algorithm>
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class solution{
    public:
    vector<int> min2min(vector<int> &arr){
        int n= arr.size();

        int first=INT_MAX;
        int second=INT_MAX;

        if(n<2){
            return {-1};
        }

        for(int i=0;i<n;i++){
            if(arr[i]<first){
                second=first;
                first=arr[i];
            }
            else if(first<arr[i] && arr[i]<second){
                second=arr[i];
            }
        }
        if(second==INT_MAX){
                return {-1};
        }
        else{
            return {first,second};
        }
    };
};

int main(){
    vector<int> arr={12,3,4,56,78};
    solution s1;

    vector<int> arr1= s1.min2min(arr);
    for(int i: arr1){
        cout<<i;
    }
}