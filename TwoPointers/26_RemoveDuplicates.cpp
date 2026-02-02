#include<iostream>
#include<vector>
using namespace std;
int Duplicates(vector<int> nums){
	int i =0;
	for(int j =1;j<nums.size()-1; j++){
		if(nums[i]!=nums[j]){
			nums[i+1]=nums[j];
			i++;
		}
	}
	return i+1;
}

int main(){
	vector<int> a ={12,12,23,34,34,45,56,67,67};
	int b = Duplicates(a);
    cout<<b;
	return 0;
}
