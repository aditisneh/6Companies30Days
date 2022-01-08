/*Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their appearance in the original array. Look at the sample case for clarification.


Example 1:

Input:
N = 5
words[] = {act,god,cat,dog,tac}
Output:
act cat tac 
god dog
Explanation:
There are 2 groups of
anagrams "god", "dog" make group 1.
"act", "cat", "tac" make group 2.
*/class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& arr) {
        //code here
        map<string, vector<string> > m;
        for(int i=0;i<arr.size();i++){
            string s = arr[i];
            sort(s.begin(),s.end());
            m[s].push_back(arr[i]);
        }
        
        vector<vector<string> > ans;
        int idx = 0;
        for(auto x : m){
            // auto v = x.second;
            // for(int i=0;i<v.size();i++){
            //     ans[idx].push_back(v[i]);
            // }
            // idx++;
            ans.push_back(x.second);
        }
        return ans;
    }
};