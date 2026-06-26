#include<iostream>
using namespace std;

bool linearSearch(int row, int col,int arr[][100], int k){
    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            if(arr[i][j]==k){
                return true;
            }
        }
    }
    return false;
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

    cout<<linearSearch(n,m,arr,7);
    return 0;
}