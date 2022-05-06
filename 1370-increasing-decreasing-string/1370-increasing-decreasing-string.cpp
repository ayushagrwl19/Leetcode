class Solution {
public:
    string sortString(string s) {
        int a[123]={0},f,i,j;
        string ans;
        for(auto i:s)
            a[i]++;
        j=0;
        while(1)
        {
            f=0;
            if(j==0)
            {
                for(i=97;i<=122;i++)
        {
            if(a[i]>0)
            {
               ans.push_back(i);
                a[i]--;
                f=1;
            }
            
        }
            }
            else
            {
        for(i=122;i>=97;i--)
        {
            if(a[i]>0)
            {
               ans.push_back(i);
                a[i]--;
                f=1;
            }
            
        }
            }
            j=j^1;
            if(f==0)
                break;
        }
        return ans;
        
    }
};