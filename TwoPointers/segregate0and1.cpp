#include<bits/stdc++.h>
using namespace std;
    
void segregate0and1(vector<int> &arr) {
        // code here
        int left = 0, right = 1;
        
        while(right){
            if(arr[left]==1 && arr[right]==0){
                swap(arr[left], arr[right]);
            }
            else{
                right++;
            }
        }
    }

int main(){
    vector<int> arr = {0,1,0,1,1,0, 0,1,0,1};
    segregate0and1(arr);    
    for(int i =0; i<arr.size();i++){
        cout << arr[i]<<"\t";
    }
    return 0;
}
