int SetBit0(int n, int idx)
{
    return n & (~(1 << idx));
}
long long CountBits0(long long n)
{
    long long cnt = 0;
    while (n)
    {
        if (!(n & 1))
            cnt++;
        n >>= 1;
    }
    return cnt;
}