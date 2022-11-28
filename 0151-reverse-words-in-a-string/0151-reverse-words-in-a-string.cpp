class Solution {
public:
    string reverseWords(string s) {
        
        int i=0,l=s.length();
        
        int j=l-1,flag=0;
        
        vector<string> v;
        
       while(i<l)
        {
            if(s[i]!=' ')
            {
                string d="";
                while(i<l&&s[i]!=' ')
                {
                    d+=s[i];
                    i++;
                }
                v.push_back(d);
                
            }
          else i++;
          
        }
        
       string main="";
        
       int n=v.size();
        i=n-1;
        string d="";
        
        while(i>=0)
        {
            if(i!=0)
            {
                d+=v[i]+" ";
            }
            else d+=v[i];
            
            i--;
        }
        
        return d;
        
    }
};