class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int m = points.size();
        multimap<int,int>memo;
        for(int i=0;i<m;i++){
            int temp =  (points[i][0]*points[i][0])+(points[i][1]*points[i][1]);
            memo.insert(pair<int,int>(temp,i));
        }
        vector<vector<int>> ans;
        int i=0;
        for(auto it=memo.begin(); it!=memo.end();it++){
            i++;
            vector<int> t;
            t.push_back(points[it->second][0]);
            t.push_back(points[it->second][1]);
            ans.push_back(t);
            if(i==k) break;
        }
        return ans;
    }
};
