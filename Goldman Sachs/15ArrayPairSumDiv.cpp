/*Given an array of integers and a number k, write a
 function that returns true if given array can be divided into pairs 
 such that sum of every pair is divisible by k.*/
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        unordered_map<int, int> ump;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]%k]++;
        }
        for(int i=0;i<nums.size();i++){
            int rem = nums[i]%k;
            if(rem==0 or 2*rem==k){
                if(ump[rem]%2!=0)
                return false;
            }
            else{
                if(ump[rem]!=ump[k-rem])
                return false;
            }
    
        }
           return true;
    }
};