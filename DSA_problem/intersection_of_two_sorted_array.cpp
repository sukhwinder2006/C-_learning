#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int arr1[m];    
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    vector<int> ans;
    int i = 0, j = 0;
    while(i<n && j<m){
        
        while(arr[i]<arr1[j]){
            
            i++;
        }
        while(arr[i]>arr1[j]){
            
            j++;
        }
        if(arr[i]==arr1[j]){
            ans.push_back(arr[i]);
            i++;
            j++;
        }
    }
    for(auto i: ans){
        cout<< i <<" ";
    }
}