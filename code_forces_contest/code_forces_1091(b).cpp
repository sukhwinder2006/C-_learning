#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int change(int *ptr,int l, int r){
   for(int i=l;i<=r;i++){
       if(*(ptr+i)==0){
           *(ptr+i)=1;
       }else{
              *(ptr+i)=0;
       }
   }
}
int main(){
    int n;
    cin >>n;
    while(n-->0){
    int a,b;
    cin>>a>>b;
    vector<int>arr(a);
    for(int i=0;i<a;i++){
        cin >> arr[i];
    }
    vector<int>ind(b);
    for(int i=0;i<b;i++){
        cin >> ind[i];
    }
}