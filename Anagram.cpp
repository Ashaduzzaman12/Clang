//This function checks two strings are anagram or not

    bool isAnagram(string s, string t) {
        map<char,int>n;
        map<char,int>n1;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            n[s[i]]++;
            n1[t[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if( n[s[i]]!=n1[s[i]]){
                return false;
            }
        }
        return true;
    }
