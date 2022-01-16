class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *nums, int n, int k)
    {
        // your code here
          deque<int> dq;
        vector<int> ans;
        for(int i=0;i<n;i++){
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