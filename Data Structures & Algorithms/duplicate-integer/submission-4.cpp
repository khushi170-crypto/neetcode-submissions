class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
            
        bool duplicate = false;    

        if(nums.empty()){
            return duplicate;
        }
        
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                duplicate = true;
            }
        }
        return duplicate;
    }
};