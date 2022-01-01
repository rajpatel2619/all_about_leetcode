class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> res;
        int c,g,f,r;
        for(const auto &q:queries){
            g = q[0];
            f = q[1];
            r = q[2];
            c = (g*g)+(f*f)-(r*r);
            int count=0;
            for(const auto &p:points){
                count += (p[0] * p[0]) + (p[1] * p[1]) + (-2)*g*p[0] + (-2)*f*p[1] + c <= 0;
            }
            res.push_back(count);
        }
        return res;
    }
};
