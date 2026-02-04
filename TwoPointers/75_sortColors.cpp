#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = 0 , high = n-1;
        while (mid <=high){
            if(nums[mid]== 0){
                swap(nums[low], nums[mid]);
                mid++;
                low++;

            }
                else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[high], nums[mid]);
                high--;
            }

        }
    }
int main(){
    vector<int> arr = {2,0,2,1,1,0};                
    sortColors(arr);    
    for(int i =0; i<arr.size();i++){
        cout << arr[i]<<"\t";
    }           
    return 0;
}

