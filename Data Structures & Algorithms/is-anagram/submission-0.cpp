class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int>map1;
        if(s.size() > t.size())
        {
            return false;
        }
        for(char ch: s)
        {
            map1[ch]++;
        }
        for(char ch:t)
        {
            map1[ch]--;
         if(map1[ch] < 0)
            return false;
        }
        return true;
    }
};
