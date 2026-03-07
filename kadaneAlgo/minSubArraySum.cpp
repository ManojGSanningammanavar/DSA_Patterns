#include<bits/stdc++.h>
using namespace std;

int minSum(vector<int> &a){
    //initialise the currentsum and min sum 
    int currsum = 0, minsum = INT_MAX;

    for(int iter = 0; iter<a.size(); iter++){
        currsum += a[iter];
        minsum = min(currsum,minsum);

        if(currsum > 0){
            currsum =0;
        }
    }
    return minsum;
}

int main(){
    vector<int> a = {12,34,5,6,8,23,-1,-23,-4};
    int min_Sum = minSum(a);
    cout<<min_Sum;
    return 0;
}