//arr = [12,13,14,15,16,17];
//k  =3
//thresold = 4
//u need to check if the avg is gtr or  eql to the threshold

#include<bits/stdc++.h>
using namespace std;

int thresholdAvg(vector<int>& arr, int k, int thershold){
	
	int windowSum = 0;
	int count =0;
	for(int i =0; i<k; i++){
		windowSum += arr[i];
	}
	if(windowSum/k >= thershold){
		count++;
	}
	
	for(int end = k ; end<arr.size(); end++){
		
		windowSum += arr[end] - arr[end-k];
		
		if(windowSum/k >= thershold){
			count++;
		}
		
	}
	
	return count;
}

int main(){
    vector<int> array={1,3,4,5,6,17};
    int n = array.size();
    int k = 3;
    int thershold = 9;

    cout<<thresholdAvg(array, k, thershold)<<endl;
}