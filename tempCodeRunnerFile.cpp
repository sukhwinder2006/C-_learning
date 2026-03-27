int main(){
    int n;
    cin >> n;
    for(int l=0;l<n;l++){
        int x;
        cin >> x;
        vector<int>a(x);
        for(int j=0;j<x;j++){
    cin >> a[j];
        }
        for(int i=0;i<x;i++){
            int greater=0;
            int lower=0;
            for(int j=i;j<x;j++){
                if(a[j]>a[i]){
                    greater++;
                }else if(a[j]<a[i]){
                    lower++;
                }
                
            }
            cout << max(greater,lower) << " ";

        }
    }

}