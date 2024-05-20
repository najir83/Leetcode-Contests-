//feel free to connect
vector<bool> isArraySpecial(vector<int> &v, vector<vector<int>> &queries)
{
    int n = v.size();
    vector<int> nextBreak(n, n);
    for (int i = n - 2; i >= 0; --i){
        if (v[i] % 2 == v[i + 1] % 2)
            nextBreak[i] = i + 1;
        else
            nextBreak[i] = nextBreak[i + 1];
    }
    vector<bool> ans(queries.size());
    for (int i = 0; i < queries.size(); ++i){
            int k = queries[i][0];
            int j = queries[i][1];
            ans[i] = nextBreak[k] > j;
    }
    return ans;
}
