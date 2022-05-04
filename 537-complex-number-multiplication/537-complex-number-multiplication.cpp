class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int a,b,c,d,a1,a2,i;
        for(i=0;i<num1.length();i++)
        {
            if(num1[i]=='+')
            {
                 a=stoi(num1.substr(0,i));
                 b=stoi(num1.substr(i+1,num1.length()-i-1));
            }
        }
        for(i=0;i<num2.length();i++)
        {
            if(num2[i]=='+')
            {
                 c=stoi(num2.substr(0,i));
                 d=stoi(num2.substr(i+1,num2.length()-i-1));
            }
        }
        a1=a*c-b*d;
        a2=a*d+b*c;
        string ans;
        ans=to_string(a1);
        ans=ans+"+";
        ans=ans+to_string(a2);
        ans=ans+"i";
        return ans;
    }
};