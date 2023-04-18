//recursive보다 효율적

int fib2(int n)
{
    index i;
    int f[0..n];

    f[0] = 0;
    if(n > 0){
        f[1] = 1;
        for(i = 2; i <= n; i++)
            f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}