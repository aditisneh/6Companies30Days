/*Given a pattern containing only I's and D's. I for increasing and D for decreasing.
Devise an algorithm to print the minimum number following that pattern.
Digits from 1-9 and digits can't repeat.

 

Example 1:

Input:
D
Output:
21
Explanation:
D is meant for decreasing,
So we choose the minimum number
among 21,31,54,87,etc.*/
class Solution{   
public:
    string printMinNumberForPattern(string s){
        // code here 
      // vector<int> ans;
      string ans = "";
        stack<int> st;
        int num=1;
        for(int i=0;i<s.size();i++){
            char a=s[i];
            if(a=='D'){
                st.push(num);
                num++;
            }
            else{
                st.push(num);
                num++;
                while(!st.empty()){
                    char a = '0' + st.top();
                    ans.push_back(a);
                    st.pop();
                }
            }
           
        }
            st.push(num++);
            while(!st.empty()){
               char a = '0' + st.top();
                ans.push_back(a);
                st.pop();
            }
           
        return ans;
    }
};
