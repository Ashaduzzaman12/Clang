 string reverseVowels(string s) {
        stack<char>x;
        for(char c:s){
            if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||
            c=='o'||c=='O'||c=='u'||c=='U'){
                x.push(c);
            }
        } int l=s.size();
        for(int i=0;i<l;i++){
            if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||
            s[i]=='I'|| s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
                s[i]=x.top();
                x.pop();
        }
    }
    return s;
 }
