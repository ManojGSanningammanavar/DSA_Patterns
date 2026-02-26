#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr = {-2,3,4,12,28,29,30,60};
	
	for(int st =0; st<arr.size();st++){
		for(int end = st ; end<arr.size(); end++){
			
			for(int i =st ; i<=end ; i++){
				cout<<arr[i]<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}
				