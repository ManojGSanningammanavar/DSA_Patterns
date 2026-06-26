#include<iostream>
#include<utility>
using namespace std;

pair<int,int> linearSearch(int row, int col,int arr[][100], int k){
    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            if(arr[i][j]==k){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int main(){
    int n,m;
    cout<<"Enter the row size : ";
    cin>>n;
    cout<<"Enter the column size : ";
    cin>>m;
    int arr[100][100];

    //input array elemnts
    cout<<"Enter the array elements :";
    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            cin>>arr[i][j];
        }
        
    }
    cout<<endl;
    //print array elemets 
    cout<<"The array elements are : ";
    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    pair<int, int> ans = linearSearch(n, m, arr, 2);
    cout<<ans.first<<ans.second;;
    return 0;
}