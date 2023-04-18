//input size = n (배열의 길이)
//basic operation = x == S[mid] & x < S[mid] (가장 많이 실행되는 것)
// 배열 S가 정렬되어있을 때 

void binsearch(int n, const keytype S[], keytype x, index& location)
{
    index low, high, mid;

    low = 1; high = n;
    location = 0;
    
    while(low <= high && location == 0){
        mid = ⌊(low + high)⌋ / 2;
        if(x == S[mid])
            location = mid;
        else if (x < S[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
}