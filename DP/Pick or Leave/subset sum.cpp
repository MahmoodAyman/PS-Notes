// max sum input is 2000 and max array size is 500
int mem[501][2001];

int n, target;
vector<int> v;
bool subset_sum(int idx, int sum)
{
    if (idx == n)
        return 0;
    if (sum == 0)
        return 1;
    int choise1 = 0, choise2 = 0;
    int &ret = mem[idx][sum];
    if (~ret)
        return ret;
    if (sum >= v[idx])
    {
        choise1 = subset_sum(idx + 1, sum - v[idx]);
    }
    choise2 = subset_sum(idx + 1, sum);
    return ret = (choise1 || choise2);
}
int main()
{
    memset(mem, -1, sizeof(mem));
    cin >> n >> target;
    v.resize(n);
    for (auto &it : v)
        cin >> it;
    cout << subset_sum(0, target);
}