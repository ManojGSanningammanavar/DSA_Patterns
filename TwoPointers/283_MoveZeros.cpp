#include<bits/stdc++.h>
using namespace std;

void MoveZero(vector<int> &arr){
	int j=0;
	for(int i  =0; i<arr.size();i++){
		if(arr[i]!=0){
			swap(arr[j],arr[i]);
            j++;
		}
		
	}
}

int main(){
	vector<int> a = {0,2,0,4,6,0,5,0,0,9,8};
	MoveZero(a);
	for(int i =0 ;i<a.size(); i++){
		cout<<a[i]<<"\t";
	}
	return 0;
}