#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int b[], int m, int n){
    int i=0,j=0,k=0;
    vector<int> c(m+n);
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    while(i<m){
        c[k++]=a[i++];
    }
    while(j<n){
        c[k++]=b[j++];
    }
    for(int i=0;i<m+n;i++){
        a[i]=c[i];
    }
    
}
void mergesort(int arr[], int l, int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,arr+m+1,m-l+1,r-m);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
