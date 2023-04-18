//input size = n (행렬의 수)
//every-case는 O(n^3)
//P에서 shortest path를 찾는 시간복잡도는 O(n)

int minmult(int n, const int d[], index p[][])
{
    index i, j, k, diagonal;
    int M[1..n][1..n];

    for(i = 1; i <= n; i++)
        M[i][j] = 0;

    for(diagonal = 1; diagonal <= n - 1; diagonal++)
        for(i = 1; i <= n - diagonal; i++){
            j = i + diagonal;
            M[i][j] = minimum(M[i][k] + M[k+1][j] + d[i-1]*d[k]*d[j]); (i<=k<=j-1)
            P[i][j] = a value of k that gave the minimum;
        }

    return M[1][n];
}