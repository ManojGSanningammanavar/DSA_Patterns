#include <bits/stdc++.h>
using namespace std;


int maxSubArray(vector<int>& nums) {
        int currsum = 0, maxsum = INT_MIN;
        for(int i =0; i<nums.size();i++){
            currsum += nums[i];
            maxsum = max(maxsum, currsum);
            if(currsum < 0){
                currsum = 0;
            }
        }
        return maxsum;
    }

int main(){
    vector<int> a = {-2,3,4,12,28,29,30,60};
    int max_Sum = maxSubArray(a);
    cout<<max_Sum;
    return 0;
}