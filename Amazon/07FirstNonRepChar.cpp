// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		  //  // Code here++ 
		  //  unordered_map<char, int> map;
		  //  queue<char> q;
		  //  string ans = "";
		  //  char first_non = a[0];
		    
		  //  for(int i=0;i<a.size();i++){
		  //      map[a[i]]++;
		  //      q.push(a[i]);
		    
		  //  //if the freq is 1 then push
		  //  if(first_non != '#' and map[first_non]==1){
		  //      ans+=q.front();
		  //  }
		  //  else{
		  //      first_non = '#';
		        
		  //      //reduce the presence of that char in the queue untill its greater than 1
		  //      while(!q.empty() and map[q.front()]!=1 ){
		  //          q.pop();
		  //      }
		  //      //now make that # or element as head that is in top of queue
		  //      if(!q.empty()){
		  //          first_non = q.front();
		  //      }
		  //      ans += first_non;
		  //  }
		  //  }
		  //  return ans;
		  
		   queue<int> q;
		    string temp="";
		    int arr[26]={0};
		    for(int i=0;i<A.size();i++){
		        arr[A[i]-'a']++;
		        if(arr[A[i]-'a']==1){
		            q.push(A[i]);
		        }
		        while(!q.empty() && arr[q.front()-'a']!=1){
		            q.pop();
		        }
		        if(q.empty()){
		            A[i]='#';
		        }else{
		            A[i]=q.front();
		        }
		    }
		    return A;
		}
    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends