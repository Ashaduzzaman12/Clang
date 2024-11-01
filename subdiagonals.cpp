void subdiagonals(){
    int n;
    cin>>n;
    vector v(n,vector<int>(n));
     for(auto &x:v){
        for(int &y:x){
            cin>>y;
        }
     }
     for(int i=1-n;i<n;i++){
        for(int j=max(0,-i);max(j,i+j)<n;j++){
            cout<<v[j][i+j]<<endl;
        }
     }
}
