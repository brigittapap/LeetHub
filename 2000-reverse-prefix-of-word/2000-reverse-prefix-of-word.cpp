class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = 0;
        for(int w=0; w < word.size(); w++){
            if(word[w] == ch){
                index = w; 
                break;
            }
        }
        string prefix = word.substr(0,index + 1);
        reverse(prefix.begin(), prefix.end());

        return prefix + word.substr(index + 1, word.size()-1);
    }
};