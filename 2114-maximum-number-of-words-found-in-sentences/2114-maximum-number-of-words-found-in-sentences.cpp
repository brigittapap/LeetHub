class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        string word;
        int max=0; int maxtemp=0;
        for(string sentence: sentences){
            for(char letter: sentence){
                if(letter == ' '){
            
                    maxtemp++;
                }
                word += letter;
            }
            if((maxtemp +1) > max){
                max = maxtemp + 1;
            }
            maxtemp = 0;
        }
        
        return max;
    }
};