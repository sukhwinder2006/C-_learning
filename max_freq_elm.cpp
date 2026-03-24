#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>> n;
  map<int,int> v;
  vector<int> a(n);
 for(int i=0;i<n;i++){
    cin >> a[i];
    v[a[i]]++;
 }
//vector<int> freq;
cout<<v[(v.size()-1)] <<endl;
}