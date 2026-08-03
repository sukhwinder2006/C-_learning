#include<bits/stdc++.h>
using namespace std;
int rev_arr(int arr[],int n,int i){
    if(i>=n/2){
        return 0;
    }
    swap(arr[i],arr[n-i-1]);
    rev_arr(arr,n,i+1);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    rev_arr(arr,n,0);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}