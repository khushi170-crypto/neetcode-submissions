class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
         unordered_map<int, int> sum;
         for(int i = 0;i <nums.size();i++){
            if(sum.find(target - nums[i]) != sum.end()){
                  ans[0] = min(i,sum[target - nums[i]]);
                  ans[1] = max (i , sum[target - nums[i]]);
                  return ans;
            }
            sum[nums[i]] = i;

         }
         return ans;
    }
};
