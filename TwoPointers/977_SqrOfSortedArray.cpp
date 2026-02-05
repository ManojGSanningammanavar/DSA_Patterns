#include<bits/stdc++.h>
using namespace std;

vector<int> sqrSortedArray(vector<int>& nums){
    int n = nums.size()-1;
    int left =0, right =n;

    for(int i  =0;i<=n;i++){
        nums[i]= nums[i]*nums[i];
    }
    sort(nums.begin(), nums.end());
    return nums;
}

int main(){
    vector<int> arr = {-7,-3,2,3,11};
    vector<int> output = sqrSortedArray(arr);
    for(int i =0; i<output.size();i++){
        cout << output[i]<<"\t";
    }
    return 0;
}