class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       int size = nums.size();
       vector<int> ans(2*size);
       

       
       for (int i = 0 ; i < ans.size() ; i++){
          if(i<size){
                 ans[i] = nums[i];
          }
          else{
            ans[i] = nums[i-size];
          }
         
       }
       return ans;
    }
   
};