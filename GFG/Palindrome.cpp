class Solution {
  public:
    bool isPalindrome(int n) {{
        if(n < 0){
            return false;
        }
        string s = to_string(abs(n));
        int len = s.length();

        for(int i = 0; i <= len/2; i++){
            if(s[i] != s[len - i -1]) return false;
        }
    return true;
    }
    }
};