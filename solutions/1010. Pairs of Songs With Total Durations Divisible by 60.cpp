class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count = 0;
        int memo[60]={0};
        for(int i=0;i<time.size();i++) memo[time[i]%60]+=1;
        for(int i=1;i<30;i++){
            count += memo[i]*memo[60-i];
        }
        count+=memo[0]*(memo[0]-1)/2;
        count+=memo[30]*(memo[30]-1)/2;
        return count;
    }
};
