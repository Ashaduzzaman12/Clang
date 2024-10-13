 string mergeAlternately(string word1, string word2) {
        string x;
        if (word1.size() >= word2.size()) {
            for (int i = 0; i < word1.size(); i++) {
                x.push_back(word1[i]);
                if (i < word2.size()) {
                    x.push_back(word2[i]);
                }
            }
        }
         else {
            for (int i = 0; i < word2.size(); i++) {
                if (i < word1.size()) {
                    x.push_back(word1[i]);
                }

                x.push_back(word2[i]);
            }
        }
        return x;
    }
