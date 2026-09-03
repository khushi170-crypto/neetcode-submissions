class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> unique(nums.begin(),nums.end());
        int maxi =0;
        
        for (int element : unique){
            if(unique.find(element - 1) == unique.end()){
                int currentElement = element;
                int length = 1;
                
                while(unique.count(currentElement + 1)){
                    length++;
                   currentElement = currentElement + 1;
                }
                  maxi = max(maxi, length);
           }
             
           
        }
        return maxi;
    }
};
