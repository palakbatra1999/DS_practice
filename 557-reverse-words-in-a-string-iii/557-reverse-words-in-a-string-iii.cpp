class Solution {
public:
    string reverseWords(string s) {
        
        int i,n=s.length();
        
        vector<string> vec;
        string str="";
        for(i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                   vec.push_back(str);
                str="";
            }
             else str+=s[i];
            
        }
        if(str!="")
            vec.push_back(str);
        int l=vec.size();
        for(i=0;i<l;i++)
        {
            string h=vec[i];
            
            int m=h.length(),j=0;
            string n="";
            for(j=m-1;j>=0;j--)
                n+=h[j];
            
            vec[i]=n;
            
         
         
        }
        string res="";
        
        for(i=0;i<l;i++)
        {
            res+=vec[i];
            if(i!=l-1)
                res+=" ";
        }
        return res;
        
    }
};