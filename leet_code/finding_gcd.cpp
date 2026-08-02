#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if(a==0){
        return b;
    }else if(b==0){
        return a;
    }else{
    if(b>=a){
        gcd(a,b-a);
    }
    if(a>=b){
        gcd(a-b,b);
    }
}
}
int main(){
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b);
}