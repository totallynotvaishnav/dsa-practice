class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end());
        res.push_back(intervals[0]);
        if(intervals.size()<2){
            return intervals;
        }
        int l=0,r=1;
        while(r<intervals.size()){
            if(intervals[r][0]<=res[l][1]){
                res[l][1]=max(intervals[r][1],res[l][1]);
                r++;
            }else{
                res.push_back(intervals[r]);
                l++;
            }
        }
        
        return res;
    }
};