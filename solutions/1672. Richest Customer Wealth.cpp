class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxe=0;
        int m = accounts.size();
        int n = accounts[0].size();
        for(int i=0;i<m;i++){
            int temp = 0;
            for(auto &e:accounts[i]) temp+=e;
            if(temp>maxe) maxe=temp;
        }
        return maxe;
    }
};
