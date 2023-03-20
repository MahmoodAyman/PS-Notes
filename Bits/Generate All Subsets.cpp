int GetBit(int n, int idx)
{
    return ((n >> idx) & 1) == 1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    multiset<vector<int>> ss; // to store subsets order
    for (auto &it : v)
        cin >> it;
    for (int i = 0; i < (1 << n); i++)
    {
        vector<int> vv; // for every subset
        for (int j = 0; j < n; j++)
        {
            if (GetBit(i, j))
            { // check if this bit on and push elment for that bit
              // you can use (i>>j)&1  instead of GetBit Function it will do the same
                vv.push_back(v[j]);
            }
        }
        ss.insert(vv);
    }
    for (auto it : ss)
    { // this for print all subsets in accending order
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}