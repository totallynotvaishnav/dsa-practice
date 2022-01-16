class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        if(n<2){
            return intervals;
        }
        int i=0;
        int j;
        for(j=1;j<n;j++){
            
            if(intervals[j][0]<=intervals[i][1]){
                
                intervals[i][0]=min(intervals[i][0], intervals[j][0]);
                intervals[i][1]=max(intervals[i][1], intervals[j][1]);
                     
            
            }else{
                res.push_back(intervals[i]);
                i=j;
            }
            
            if(j==n-1){
                 res.push_back(intervals[i]);
            }
            
        
        }
     
      
        return res;
    }
};