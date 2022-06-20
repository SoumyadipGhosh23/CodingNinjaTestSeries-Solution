int countSetBits(int n)
{
    // Write your code here
    int finalcount = 0;
    for (int i = 0; i <= n; i++)
    {
        int count = 0;
        while (n)
        {
            count += (n & 1); // check last bit
            n >>= 1;
        }
        finalcount += count;
    }
    return finalcount;
}