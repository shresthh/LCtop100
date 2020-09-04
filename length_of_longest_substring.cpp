class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set<char> set;
        int i = 0, j = 0;
        int n = s.size();
        int mx = 0;
        while(i<n && j<n){
            if(set.find(s[j]) == set.end()){
                set.insert(s[j++]);
                mx = max(mx, j-i);
            }
            else{
                set.erase(s[i++]);
            }
        }
        return mx;
    }
};
