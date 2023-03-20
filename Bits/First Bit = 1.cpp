int GetFirstBit(int x)
{
    return log2(x & -x) + 1;
}