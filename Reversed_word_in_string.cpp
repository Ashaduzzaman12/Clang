
string reverseWords(string s) {
        stack<string>n;
        stringstream ss(s);
        string x;
        while(ss>>x){
            n.push(x);
        } string x1;
        int l=n.size();
        while(!n.empty()){
            string k=n.top();
            x1+=k;
            n.pop();
            if(l>1){
                x1+=" ";
            }l--;
        }
        return x1;
    }
