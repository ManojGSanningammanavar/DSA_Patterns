#include<iostream>
#include<vector>
 
using namespace std;

int main(){
    vector<int> arr = {9, 4, 5, 7, 8,90,89};
    int n = arr.size();

    int pos, val;
    cout<<"Enter the post to insert the value : ";
    cin>>pos;

    cout<<"Enter the value : ";
    cin>>val;

    if(pos<0 || pos>arr.size()){
        cout<<"Invalid position!";

    }
    
    arr.insert(arr.begin()+pos, val);

    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int position ;
    cout<<"Enter the pos to delete: ";
    cin>>position;

    arr.erase(arr.begin()+position);

    cout<<"array After deletion : ";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}