class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        int n = rowIndex;
        vector<vector<int>> ans;
        
        vector<int> t1(1,1);
        ans.push_back(t1);
       
        vector<int> t2(2,1);
        ans.push_back(t2);
        
        
        for(int i=3;i<=n+1;i++){
            vector<int> t(i,1);
            for(int j=1;j<i-1;j++){
                t[j] = ans[i-2][j-1] + ans[i-2][j];
            }
            ans.push_back(t);
        }
        
        return ans[n];
    }
};
