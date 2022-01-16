/*Given a list of contacts contact[] of length n where each contact is a string which exist in a phone directory and a query string s. The task is to implement a search query for the phone directory. Run a search query for each prefix p of the query string s (i.e. from  index 1 to |s|) that prints all the distinct contacts which have the same prefix as p in lexicographical increasing order. Please refer the explanation part for better understanding.
Note: If there is no match between query and contacts, print "0".*/
class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        set<string> map;
        vector<vector <string> > ans(s.size());
        for(int i=0;i<n;i++){
            map.insert(contact[i]);
        }
        for(int i=0;i<s.size();i++){
            for(auto it : map){
                if(s.substr(0,i+1)==it.substr(0,i+1)){
                    ans[i].push_back(it);
                }
            }
            if(ans[i].size()==0){
                ans[i].push_back(to_string(0));
            }
        }
        return ans;
    }
};