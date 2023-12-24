class Solution {
public:
    int maxVowels(string s, int k) {
        
        int i=0,j=k,l=s.length();
        
        int vowelCount=0,vMax=0;
        
        while(i<k)
        {
             if(s[i]=='a'|| s[i]=='e'||s[i]=='o'|| s[i]== 'u' || s[i]== 'i')
             {  
                vowelCount++; 
                 vMax=max(vMax,vowelCount);
                
             }
            i++;
        }
        i=0;
        cout<<vMax;
        while(i<l && j<l)
        {
            if(s[j]=='a'|| s[j]=='e'||s[j]=='o'|| s[j]== 'u' || s[j]== 'i')
             {  
                vowelCount++;   
                
             }
            
            
            j++;
            
             if(s[i]=='a'|| s[i]=='e'||s[i]=='o'|| s[i]== 'u' || s[i]== 'i')
             {  
                vowelCount--;   
               
             }
            i++;
            vMax=max(vMax,vowelCount);
            
        }
        
        return vMax;
        
    }
};