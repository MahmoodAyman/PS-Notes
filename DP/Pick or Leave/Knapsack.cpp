// this code based on SPoj Problem Knapsack https://www.spoj.com/problems/KNAPSACK/

const int oo = 0x3f3f3f3f;
const int N = 2e3 + 2;
long long n, w;
vector<pair<long long, long long>> v;
long long mem[N][N];
long long knapsack(int idx, long long weight) {
    if (weight < 0)return -oo;
    if (idx >= n)return 0;
    long long &ret = mem[idx][weight];
    if (~ret)return ret;
    return ret = max(v[idx].second + knapsack(idx + 1, weight - v[idx].first),
                     knapsack(idx + 1, weight));
}
 
int main() {
    Fast();
    memset(mem,-1,sizeof mem);
    cin >> w >> n;
    v.resize(n);
    for (auto &it: v) {
        cin >> it.first >> it.second;
    }
    cout << knapsack(0, w);
} 