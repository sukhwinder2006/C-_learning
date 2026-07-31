#include<bits/stdc++.h>
using namespace std;
void print_alt_bin(int a, int b){
for(int i=1;i<=a;i++){
    cout<<( (b+i)%2);
}
}
int main(){
    int a;
    cin >> a;
    for(int i=1;i<=a;i++){
        print_alt_bin(i,( (i+1)%2));
        cout << endl;
    }
    return 0;
}