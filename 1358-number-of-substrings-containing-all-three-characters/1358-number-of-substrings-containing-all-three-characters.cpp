class Solution {
public:
    int numberOfSubstrings(string s) {
        int i,j,n=s.length();
        
  queue<int> a,b,c;
         int ans=0;
        for(i=0;i<n;i++)
        {
           
            if(s[i]=='a')
             a.push(i);
             if(s[i]=='b')
             b.push(i);
             if(s[i]=='c')
             c.push(i);
          
        }
        
        i=0;
        
        while(!a.empty()&&!b.empty()&&!c.empty())
        {
            char ch=s[i];
            int v=0;
            if(ch=='a')
            {
                v=max(b.front(),c.front());
                    a.pop();
            }
              if(ch=='b')
            {
                v=max(a.front(),c.front());
                    b.pop();
            }
              if(ch=='c')
            {
                v=max(b.front(),a.front());
                    c.pop();
            }
            ans+=(n-max(v,i));
            i++;
        }
        
       
        return ans;
    }
};