#include<bits/stdc++.h>
using namespace std;

pair<int,int> pairSum(vector<int>& arr, int target){
	int left =0, right = arr.size()-1;
	while(left<right){
		int sum = arr[left] + arr[right];
		if(sum == target) return {left,right};
		else if (sum<target) left++;
		else right--;
	}
	return {-1,-1};
}

int main(){
vector<int> a = {2,5,7,9,12,14,18,34,67,89};
int t = 52;
pair <int,int> r =pairSum(a,t);
 if(r.first != -1)
        cout << "Pair found at indices: " << r.first << " " << r.second;
    else
        cout << "No pair found";
return 0;
}