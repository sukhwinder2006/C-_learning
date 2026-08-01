#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
cin >> a;
for(int i=1;i<=a;i++){
    for(int j=1;j<=a-i;j++){
        cout << " ";
    }
    for(int j=1;j<=i;j++){
        cout << (char)(64+j)   ;
    }
    for(int j=i-1;j>=1;j--){
        cout << (char)(64+j) ;
    }
    cout << endl;
    

}

}
