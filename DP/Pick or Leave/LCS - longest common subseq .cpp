// based on leetcode 1143 problem
// O(NM) Time and memory 
int mem[1003][1003];
string s1, s2;
int n, m;
int lcs(int idx1, int idx2)
{
    if (idx1 == n || idx2 == m)
        return 0;
    int &ret = mem[idx1][idx2];
    if (~ret)
        return ret;
    if (s1[idx1] == s2[idx2])
    {
        return ret = 1 + lcs(idx1 + 1, idx2 + 1);
    }
    return ret = max(lcs(idx1, idx2 + 1), lcs(idx1 + 1, idx2));
}
int main()
{
    memset(mem,-1,sizeof mem);
    cin >> s1 >> s2;
    n = s1.size(), m = s2.size();
    cout << lcs(0, 0);
}