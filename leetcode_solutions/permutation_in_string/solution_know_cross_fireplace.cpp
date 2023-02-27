class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size(), n2=s2.size();
        if (n1>n2) return false;
        vector<int> v1(26,0), v2(26,0);
        for (char ch: s1) v1[ch-'a']++;
        for (int i=0; i<n2; i++)
        {
            v2[s2[i]-'a']++;
            if (i>=n1) v2[s2[i-n1]-'a']--;
            if (v1==v2) return true;
        }
        return false;
    }
};