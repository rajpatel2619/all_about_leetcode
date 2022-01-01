class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int n =*max_element(candies.begin(),candies.end());
        for(auto &e:candies){
            if((extraCandies+e)>=n) res.push_back(true);
            else res.push_back(false);
        }
        return res;
    }
};
