class Solution {
public:
    int compress(vector<char>& st) {
        
        string s;
        
        int i,j,l=st.size();
        
        i=0;
        j=i;
        
        while(i<l && j<l)
        {
            if( st[i]==st[j] )
            {
                
                j++;
            }
            else 
            {
                
                
                    if(j-i==1)
                    s+=st[i];
                    else 
                    s+=st[i]+to_string(j-i);
                
               
                i=j;
            }
        }
        
       
         
                  if(i<l)
                  {

                    if(l-i==1)
                    s+=st[i];
                    else 
                    s+=st[i]+to_string(l-i);}
               
         j=0;
        cout<<s;
        
        for(i=0;i<s.length();i++)
        {
          st[i]=s[i];
        }
        
        return s.length();
        
        
        
    }
};