#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target){
	int left=0, right = arr.size()-1;
	while(left<right){
		long long sum = arr[left] + arr[right];
		
		if(sum == target) return {left+1, right+1};
		else if(sum<target) left++;
		else right--;
	}
	return {-1,-1};
}

int main(){
	vector<int> inputArray = {1,3,5,6,8,9,10,24,35};
	int targetSum = 19;
	
	vector<int> outputArray = twoSum(inputArray,targetSum);
	for(int i =0; i<outputArray.size();i++){
		cout << outputArray[i]<<"\t";
	}
	
	return 0;
}