/*An encoded string (s) is given, the task is to decode it. The pattern in which the strings were encoded were as follows
original string: abbbababbbababbbab 
encoded string : 3[a3[b]1[ab]]

Example 1:

Input: s = 1[b]
Output: b
Explaination: 'b' is present only one time.*/
class Solution{
public:
    string decodedString(string s){
        // code here
        int currno = 0;
        int prevno = 0;
        string currstr = "";
        string prevstr;
        stack<int> numstack;
        stack<string>  strstack;
        
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])) currstr+=s[i];
            
            if(isdigit(s[i])) currno = currno*10 + s[i]-'0';
            
            if(s[i]=='['){
                strstack.push(currstr);
                numstack.push(currno);
                
                currno = 0;
                currstr = "";
            }
            if(s[i]==']'){
                prevstr = strstack.top();
                prevno = numstack.top();
                
                strstack.pop();
                numstack.pop();
                
                while(prevno--){
                    prevstr += currstr;
                }
                       
                currstr = prevstr;
            }
            
        }
        return currstr;
    }
};