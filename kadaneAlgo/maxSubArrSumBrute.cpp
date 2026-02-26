#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int>& arr){
	int maxSum = INT_MIN;
	for(int st=0; st<arr.size();st++){
		int currSum = 0;
		for(int end = st; end<arr.size(); end++){
			currSum += arr[end];
			maxSum = max(currSum,maxSum);
		}
	}
	return maxSum;
}
	
int main(){
	vector<int> a = {-2,3,4,12,28,29,30,60};
	
	int max_Sum = maxSubArraySum(a);
	
	cout<<max_Sum;
	return 0;
}