//input size = n (배열의 길이)
//basic operation = S[location] != x
//worst-case complexity = location <= n -> W(n) = n
//best-case complexity = B(n) = 1
//average-case complexity
// 순차탐색 : 인덱스 1 ~ n

void seqsearch(int n, const keytype S[], keytype x, index& location)
{
    location = 1;
    while(location <= n && S[location] != x)
        location++;
    if(location > n) // 없으면 0 리턴
        location = 0;
}