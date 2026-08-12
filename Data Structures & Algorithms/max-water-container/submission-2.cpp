class Solution {
public:
    int maxArea(vector<int>& heights) {

        int l=0;
        int m=heights.size()-1;
         int res=0;
        while(l<m)
        {
            int area = min(heights[l],heights[m]) *(m-l); 
            res = max(res,area);
            if(heights[l]<=heights[m])
            {
                l++;
            }else{
                m--;
            }
        }
       return res;
        
    }
};
