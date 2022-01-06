class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int final_ans = INT_MAX;
        int csum = 0;
        int s=0;
        int e=0;
        for(s=0,e=0;e<nums.size();e++){
            csum+=nums[e];
            
     
            
             if(target<=csum){
                while(csum>=target){
                    int len = 1+e-s;
                     final_ans = min(len,final_ans); 
                    csum-=nums[s];
                    s++;
                }
                
            }
        
            
        }
        if(final_ans==INT_MAX) return 0;
        return final_ans;
    }
};