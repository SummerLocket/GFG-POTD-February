class Solution {
  public:
    int getMinimumDays(int N,string S, vector<int> &P) {
        // code here
        int m=0;
        for(int i=0;i<N-1;i++){
            if(S[i] == S[i+1]){
                m++;
            }
        }
        
        if(m == 0){
            return 0;
        }
        else{
            for(int i=0;i<N-1;i++){
                int in = P[i];
                if(S[in-1] == S[in]){
                    m--;
                }
                if(S[in] == S[in+1]){
                    m--;
                }
                S[in] = '?';
                
                if(m==0){
                    return i+1;
                }
            }
        }
    }
};