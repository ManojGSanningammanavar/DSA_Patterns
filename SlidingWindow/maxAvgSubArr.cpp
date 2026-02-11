#include<bits/stdc++.h>
using namespace std;

double maxAvg(vector<int>& arr, int k){
int windowSum = 0;
int n = arr.size();

for(int i =0; i<k ; i++){
windowSum += arr[i];
}

int maxSum = windowSum;

int j = k;

while(j<n){
	
	maxSum += arr[j];
	maxSum -= arr[j-k];
	
	j++;
	
	maxSum = max(windowSum, maxSum);
}

return maxSum/k;
}

int main(){
    vector<int> array={1,2,3,4,5};
    int n = array.size();
    int k = 3;

    cout<<maxAvg(array, k)<<endl;
}