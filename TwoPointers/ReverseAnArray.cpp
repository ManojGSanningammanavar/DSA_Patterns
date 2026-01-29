#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr){
    int left = 0;
    int right = arr.size() - 1;

    while(left < right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main(){
    vector<int> a = {12,23,34,21,56,76,90,65,39,48};

    reverseArray(a);

    for(int x : a){
        cout << x << " ";
    }
    return 0;
}
