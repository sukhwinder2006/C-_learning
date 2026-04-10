#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int n;
cin >>n;
while(n>0){
    int a,b;
    cin>>a>>b;
    int sum=0;
    int add=b*a;
    vector<int>arr(a);
    for(int i=0;i<a;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    if(((sum%2)!=0)||((add%2)==0)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    n--;
}
}
/**/