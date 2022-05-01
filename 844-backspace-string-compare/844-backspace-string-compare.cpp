class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i=s.length()-1,j=t.length()-1,x=0,y=0,f=0;
        while(i>=0&&j>=0)
        {
            if(s[i]!='#'&&x==0&&t[j]!='#'&&y==0)
            {
                if(s[i]==t[j])
                {
                    i--;
                    j--;
                    continue;
                }
                else
                {
                    f=1;
                    break;
                }
            }
            if(s[i]=='#')
            {
                x++;
                i--;
            }
            else if(x>0)
                {
                    x--;
                    i--;
                }
            if(t[j]=='#')
            {
                j--;
                y++;
            }
            else if(y>0)
            {
                y--;
                j--;
            }
        }
        while(i>=0)
        {
           if(s[i]=='#')
            {
                x++;
                i--;
            }
            else if(x>0)
                {
                    x--;
                    i--;
                } 
            else
                break;
        }
         while(j>=0)
        {
           if(t[j]=='#')
            {
                y++;
                j--;
            }
            else if(y>0)
                {
                    y--;
                    j--;
                } 
            else
                break;
        }
        if(f==0&&i==j)
            return true;
        return false;
    }
};