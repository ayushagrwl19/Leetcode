class Solution {
public:
    string generateTheString(int n) {
        string s;
        if(n%2==0)
        {
            s.push_back('a');
            n--;
        }
        while(n--)
        {
            s.push_back('b');
        }
        return s;
    }
};