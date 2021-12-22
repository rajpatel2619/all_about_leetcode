class Solution {
public:
    bool divisorGame(int n) {
        if(n==1) return false;
        if(n==2) return true;
        vector<int> tab(n,0);
        tab[0]=0;
        tab[1] = 1;
        for(int i=2;i<n;i++){
            tab[i] = !tab[i-1];
        }
        return tab[n-1];
    }
};
