class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        vector<char> res;
        int t=0,i,j;
        
        for(i=0;i<n;i++)
        {
          //  t=0;
            j=i;
            
            while(j<n&&chars[i]==chars[j])
            {
                t++;
                j++;
                //i++;
            }
            res.push_back(chars[i]); 
            
            if(t>1)
            { vector<char> ans;
                while(t!=0)
                {
                    int h=t%10;
                    char c=char(h+48);
                 ans.push_back(c);
                    t=t/10;
                }
             
             for(int k=ans.size()-1;k>=0;k--)
                 res.push_back(ans[k]);
            }
            i=j-1;
            t=0;
           
        }
      //  string s="";
        for(i=0;i<res.size();i++)
           chars[i]=res[i];
        
      return  res.size();
     
    }
};