int SetBit1(int n, int idx)
{
    return n | (1 << idx);
}

int CountBits1(int n)
{
    int cnt = 0;
    while (n)
    {
        cnt++;
        n &= (n - 1);
    }
    return cnt;
}