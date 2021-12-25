class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxe=INT_MIN;
        int sum=0;
        for(auto e:nums){
            sum+=e;
            maxe = max(sum,maxe);
            if(sum<0) sum=0;
        }
       
        return maxe;
    }
};
