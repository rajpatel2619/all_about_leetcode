class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>> ans;
        
        vector<int> t1(1,1);
        ans.push_back(t1);
        if(n==1) return ans;
​
        vector<int> t2(2,1);
        ans.push_back(t2);
        if(n==2) return ans;
        
        
        for(int i=3;i<=n;i++){
            vector<int> t(i,1);
            for(int j=1;j<i-1;j++){
                t[j] = ans[i-2][j-1] + ans[i-2][j];
            }
            ans.push_back(t);
        }
        
        return ans;
    }
};
