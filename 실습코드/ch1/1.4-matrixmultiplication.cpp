//input size = n (배열의 길이)
//basic operation = C[i][j] = C[i][j] + A[i][k] * B[k][j];
//every-case time complexity = T(n) = n^3


void matrixmult(int n, const number A[][], const number B[][], number C[][])
{
    index i, j, k;
    
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++){
            C[i][j] = 0;
            for(k = 1; k <= n; k++)
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
        }
}