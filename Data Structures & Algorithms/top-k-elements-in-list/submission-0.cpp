class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>map1;
         for(int num:nums)
         {
            map1[num]++;
         }
         vector<pair<int,int>>v1;
         for(auto &it:map1)
    {
         printf("first=%d\n",it.first);
         printf("second= %d\n",it.second);
         v1.push_back({it.first,it.second});
    }
     sort(v1.begin(),v1.end(),[](auto &a,auto &b)
     {
        return a.second > b.second;
     });
      vector<int>res;
      for(int i=0;i<k;i++)
      {
        res.push_back(v1[i].first);
      }
     return res;
    }
};
