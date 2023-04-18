//input size = n (배열의 길이)
//basic operation = S[j] < S[i](key들을 비교하는 것이 exchange보다 많이 실행되기 때문)
//every-case time complexity = T(n) = n 

void exchangesort(int n, keytype S[])
{
    index i,j;
    for(i = 1; i <= n, i++)
        for(j = i + 1; j <= n; j++)
            if(S[j] < S[i])
                exchange S[i] and S[j]
    
}

//오름차순 정렬
//ex 4 5 2 1 3
//   i j 
//4 5 2 1 3
//2 5 4 1 3
//1 5 4 2 3
//1 4 5 2 3
//1 2 5 4 3
//1 2 4 5 3
//1 2 3 5 4
//1 2 3 4 5

