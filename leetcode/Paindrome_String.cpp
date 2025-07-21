class Solution {
public:
    bool isPalindrome(string s){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string snew = "";
        for(char c : s){
            if(isalnum(c)){
                snew += c;
            }
    }
    if (snew.empty()) return true;
    return check(snew, 0, snew.size()-1);
    }
    bool check(const string &s, int start, int end) {
        if(start >= end) return true;
        if(s[start] != s[end]) return false;
        return check(s, start+1, end-1);
    }
};