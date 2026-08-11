#include<bits/stdc++.h>
using namespace std;
void rec_insertion_sort(int arr[], int i, int n){
    if(i==n){
        return;
    }
    int j=i;
    while((j)>0 && arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
    }
    rec_insertion_sort(arr,i+1,n);


}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rec_insertion_sort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}