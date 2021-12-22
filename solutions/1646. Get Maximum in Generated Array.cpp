class Solution {
public:
    int getMaximumGenerated(int n) {
      // int ans=1;  
      vector<int> tabu(n+1,0);
    if(n==0) return 0;
        tabu[1]=1;
        if(n==1) return 1;
        
        for(int i=2;i<=n;i++){
            int q = i/2;
            if(i%2==0) tabu[2*q] = tabu[q];
            else tabu[2*q+1]=tabu[q]+tabu[q+1]; 
        }
    
     sort(tabu.begin(),tabu.end());
        for(auto e:tabu) cout<<e<<" ";
    return tabu[n];
    }
};
