#include<bits/stdc++.h>
using namespace std;

pair<int,int> twosum (vector<int>& arr, int target){
	int low =0;
	int high = arr.size()-1;
	
	while(low<high){
		
		int sum = arr[low]+arr[high];
		
		if(sum == target){
			return {low+1,high+1};
		}
		
		else if(sum<target){
			low++;
		}
		else{
			high--;
		}
		
	}
    return {-1,-1};
	
}

int main(){
    
    vector<int> arr = {2,7,11,15};
    int target = 9;
    
    pair<int,int> ans = twosum(arr,target);
    
    cout<<ans.first<<" "<<ans.second;
    
    return 0;
}