class Solution {
public:
    bool isValid(string s) {
        stack<char> parantheses;
   for (char& c : s) {
        switch (c) {
            case '(': parantheses.push(c); break;
            case '{': parantheses.push(c); break;
            case '[': parantheses.push(c); break;
            case ')': if (parantheses.empty() || parantheses.top()!='(') return false; else parantheses.pop(); break;
            case '}': if (parantheses.empty() || parantheses.top()!='{') return false; else parantheses.pop(); break;
            case ']': if (parantheses.empty() || parantheses.top()!='[') return false; else parantheses.pop(); break;
            default: ; 
        }
    }
    return parantheses.empty();
    }
};