#include<bits/stdc++.h>
using namespace std;
//Dutch National Flag Algorithm
vector<int> sortArrayByParity(vector<int>& nums) {
       int left =0, right = nums.size()-1;
       while(left<right){
        if(nums[left]%2==0){
            left++;
        }
        else if(nums[left]%2!=0){
            swap(nums[left], nums[right]);
            right--;
        }
       }
       return nums;
    }

    int main(){
        vector<int> arr = {3,1,2,4,0,6,0,8};
        vector<int> output = sortArrayByParity(arr);
        for(int i =0; i<output.size();i++){
            cout << output[i]<<"\t";
        }
        return 0;
    }