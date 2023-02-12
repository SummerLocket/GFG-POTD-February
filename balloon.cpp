

//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        int ans = INT_MAX;
        unordered_map<char,int> mp;
        int n = s.length();
        for(int i=0;i<n;i++){
           mp[s[i]]++; 
        }
        
        string str = "balon";
        for(auto x:str){
            if(x == 'b' || x == 'a'|| x == 'n'){
                ans = min(ans,mp[x]);
            }
            else{
                ans = min(ans,mp[x]/2);
            }
        }
        return ans;
    }
};