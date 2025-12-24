#include <iostream>
#include <vector>

using namespace std;

vector<int> vectorarr(vector<int> arr, int n){
    int left=0;
    int right=n-1;

    int temp;
    while(left < right){
        temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;

        left++;
        right--;
    }

    return arr;
};

int main(){
    vector<int> arr={12,23,12,34,56};
    int n=arr.size();
    vector<int> res = vectorarr(arr,n);

    for(int i=0; i<=n; i++){
        cout<< res[i]<<"\t";
    }
}