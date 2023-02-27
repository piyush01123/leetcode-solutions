class Solution {
public:
    int lb(vector<int> v, int t)
    {
        return lower_bound(v.begin(),v.end(),t)-v.begin();
    }
    int ub(vector<int> v, int t)
    {
        return upper_bound(v.begin(),v.end(),t)-v.begin();
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(), n=matrix[0].size();
        // cout << m << ' ' << n << endl;
        vector<int> col0 (m,0);
        for (int i=0; i<m; i++) col0[i]=matrix[i][0];
        // cout << m << ' ' << n << endl;

        
        int s = lb(col0, target); 
        int e = ub(col0, target);
        // cout << m << ' ' << n << ' ' << s << ' ' << e << endl;

        if (s==m || matrix[s][0]>target) s = max(s-1, 0);
        // cout << m << ' ' << n << 'S' << s << 'E' << e << endl;

        for (int i=s; i<e; i++)
        {
            int idx = lb(matrix[i], target);
            if (idx<n && matrix[i][idx]==target) return true;
        }
        return false;
    }
};