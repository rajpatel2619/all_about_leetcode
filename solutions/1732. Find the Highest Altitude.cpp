class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxe=0;
        int sum=0;
        for(auto &e:gain){
            sum+=e;
            maxe = max(maxe,sum);
        }
        return maxe;
    }
};
