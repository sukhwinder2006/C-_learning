#include<bits/stdc++.h>
using namespace std;
int fabi(int n, int sum){
    if(n==0){
        return sum;
    }else if(n==1){
        sum+=1;
        return sum;
    }
    sum+=fabi(n-1,sum)+fabi(n-2,sum);

}
int main(){
    int n;
    cin>>n;
    int sum=0;
    cout<<fabi(n,sum)<<" ";
}