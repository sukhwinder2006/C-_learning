#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[n-1-i]==0){
            
            
            for(int j=0;j<i-count;j++){
            arr[n-1-i+j]=arr[n-1-i+j+1];
            }
            count++;
            arr[n-count]=0;
        }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}