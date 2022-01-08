/*For two strings s and t, we say "t divides s" if and only if s = t + ... + t (i.e., t is concatenated with itself one or more times).

Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

 

Example 1:

Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"*/
class Solution {
public:
    
    int gcd(int s1,int s2){
    
        if(s1==0) return s2;
        
        if(s2==0) return s1;
        
        if(s1>s2) return gcd(s1%s2,s2);
        else return gcd(s1,s2%s1);

    }
    
    string gcdOfStrings(string str1, string str2) {
        return (str1+str2==str2+str1)? str1.substr(0,gcd(str1.length(),str2.length())) : "";
    }
};