#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int>& arr, int k){
    int windowsum =0;
    int maxsum =0;

    for(int i =0; i<k ; i++){
        windowsum += arr[i];
    }

    maxsum =windowsum;

    for(int end = k; end < arr.size(); end++ ){
            windowsum += arr[end];
            windowsum -= arr[end - k];
            maxsum = max(maxsum, windowsum);
    }

    return maxsum;
}

int main(){
    vector<int> array={1,2,3,4,5};
    int n = array.size();
    int k = 3;

    cout<<maxSubArraySum(array, k)<<endl;
}