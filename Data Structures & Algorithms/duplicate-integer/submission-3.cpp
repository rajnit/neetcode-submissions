class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>map1;
        for(int num:nums)
        {
            map1[num]++;
        }
        for(auto it:map1)
        {
            if(it.second>1)
            {
                return true;
            }
        }
        return false;
    }
    
};