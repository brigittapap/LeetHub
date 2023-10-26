class Solution {
public:
   int lengthOfLongestSubstring(string s) 
   {
        auto windowStart = 0;
        auto maxLength = 0;
   
        unordered_map<char, int> charmap;
       
        for (int windowEnd = 0; windowEnd < s.size(); windowEnd++) 
        {
            char rightchar = s[windowEnd];
    
            if (charmap.find(rightchar) != charmap.end()) 
            {
                windowStart = max(windowStart, charmap[rightchar] + 1);
            }
      
            charmap[rightchar] = windowEnd;
            maxLength = max(maxLength, windowEnd - windowStart + 1);
        }
    return maxLength;
  }
};