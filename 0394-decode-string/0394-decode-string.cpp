class Solution {
public:
    string decodeString(string s) {
        
        stack<string> st;
        
       
        
      
        
         for(int i=0;i<s.length();i++)
         {
            if(s[i]==']')
            {
              string test="";
                
                while( !st.empty() && st.top()!= "[")
                {
                    test=st.top()+test;
                    st.pop();
                }
              
                st.pop();
                string myInt="";
               
                while(!st.empty() && (int)st.top()[0]>47 && (int)st.top()[0] <58)
                {
                    myInt=st.top()+myInt;
                    st.pop();
                }
              
                 
                int j=myInt.length();
                int num=0;
                
                while(j!=0)
                {
                  num+=pow(10,j-1)*((int)myInt[myInt.length()-j]-48); 
                    
                    j--;
                }
             
                myInt="";
                //cout<<myInt;
                
                while(num!=0)
                {
                  myInt=test+myInt;
                    num--;
                }
               
                st.push(myInt);
                
            }
             else  st.push(string(1, s[i]));
         }
        
       //return gh;
        
                string nw="";
       
        while(!st.empty())
        {
            nw=st.top()+nw;
            st.pop();
        }
 
        return nw;
        
    }
};