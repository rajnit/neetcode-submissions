class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
          
          map<int,int>map1;
          for(int i=0; i < nums.size(); i++)
          {
            map1[nums[i]]++;
          }
          for(auto const& [key, val] : map1)
          {
            if(val > 1)
            {
                return true;
            }
          }
        return false;
    }
};