//input size = n (배열의 길이)
//basic operation = x == S[mid] & x < S[mid] (가장 많이 실행되는 것)
//worst-case는 if n is a power of 2
// W(n) = W(n/2) + 1
// W(1) = 1
// W(n) = lgn + 1 if n is not a power of 2, then W(n) = ⌊lgn⌋ + 1
//배열 S가 정렬되어있을 때 

index location(index low, index high)
{
    index mid;

    if(low > high)
        return 0;
    else{
        mid = ⌊(low + high)⌋ / 2;
        if(x == S[mid])
            return mid;
        else if(x < S[mid])
            return location(low, mid - 1);
        else
            return location(mid + 1, high);
    }
}