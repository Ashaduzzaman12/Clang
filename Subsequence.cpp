bool isSubsequence(string s, string t) {
        queue<char>q;
        for(char c: s){
            q.push(c);
        }
        for(char x:t){
            if(q.front()==x){
                q.pop();
            }
        }
        if(!q.empty()) return false;
        else return true;
    }
