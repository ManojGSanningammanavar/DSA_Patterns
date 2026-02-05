#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& arr){
	
	vector<vector<int>> result;
	
	sort(arr.begin(),arr.end());
	
	for(int low =0; low< arr.size()-2;low++){
		int mid = low+1;
		int high = arr.size()-1;
		
		if(low>0 && arr[low] == arr[low-1]) continue;
		
		while(mid < high){
			
			int sum =  arr[low] + arr[mid] + arr[high];
			
			if(sum == 0){
				
			result.push_back({arr[low] , arr[mid], arr[high]});
			
			while(mid<high && arr[mid] == arr[mid+1]) mid++;
			while(mid<high && arr[high] == arr[high-1]) high--;
			
			mid++;
			high--;
			
			}
			
			else if(sum < 0){
				mid++;
			}
			
			else{
				high--;
			}
		
		}
	}
	return result;
}

int main(){
    vector<int> inputArray = {-1,0,1,2,-1,-4};
    
    vector<vector<int>> outputArray = threeSum(inputArray);
    
    for(int i =0; i<outputArray.size();i++){
        for(int j=0;j<outputArray[i].size();j++){
            cout << outputArray[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    return 0;
}