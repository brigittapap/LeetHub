class Solution {
public:
    string truncateSentence(string s, int k) {
        string result;
        int space = 0;
        for(char letter: s){
            if(letter == ' '){
                space++;
                if(space == k){
                    return result;
                }
                result += letter;
            } else {
                result += letter;
            }
        }
        return result;
    }
};