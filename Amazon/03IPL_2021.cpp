/*Due to the rise of covid-19 cases in India, this year BCCI decided to organize knock-out matches in IPL rather than a league.

Today is matchday 2 and it is between the most loved team Chennai Super Kings and the most underrated team - Punjab Kings. Stephen Fleming, the head coach of CSK, analyzing the batting stats of Punjab. He has stats of runs scored by all N players in the previous season and he wants to find the maximum score for each and every contiguous sub-list of size K to strategize for the game.*/

class Solution {
  public:
  
    
    
    vector<int> max_of_subarrays(vector<int> nums, int n, int k) {
        deque<int> dq;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(!dq.empty() and dq.front()==i-k)
                //if windown size excedd then pop front
                dq.pop_front();
            
            while(!dq.empty() and nums[dq.back()]<=nums[i])
                //when left of an ele is less then pop all left
                dq.pop_back();
            
            //push element means its greater or less than already pushed ele
            dq.push_back(i);
            if(i>=k-1) ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};