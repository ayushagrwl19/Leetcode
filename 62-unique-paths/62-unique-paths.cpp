class Solution {
public:
    int uniquePaths(int m, int n) {
      long long int i=m+n-2,j=min(m,n)-1,l=1,k,h=1;
        for(k=i;k>=i-j+1;k--)
        {
            l=l*k;
            while(h<=j)
            {
                if(l%h==0)
                {
                    l=l/h;
                    h++;
                }
                else
                    break;
            }
           // cout<<l;
        }
        
        return int(l);
    }
};