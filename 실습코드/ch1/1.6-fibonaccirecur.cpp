//input size = n (encode ex.001011)

//f0 = 0, f1 = 1
//fn = fn-1 + fn-2, for n >= 2

int fib(int n)
{
    if(n <= 1)
        return n;
    else
        return fib(n-1) + fib(n-2);
}