#include <algorithm>
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void grprev(vector<int> &arr,int k){
   //start with the size of an array for array traversal
   int n =arr.size();

   //now traversal with k sets tht means starting with 0 and end with 0+k
   for(int i=0;i<n;i+=k){
    int left=i; //now reversal in group starts
    int right=min(k+i-1,n-1); //this is because its the end of the grp and min is necessary to find the end of the whole array too

    while(left<right){ //the left will always be min because they r indexes
        swap(arr[left++],arr[right--]);
    }
   }

   for(int i: arr){
    cout<<i<<"\t";
   }
};

int main(){
    vector<int> arr={1,2,3,4,5};
    grprev(arr,3);}