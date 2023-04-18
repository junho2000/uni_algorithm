int bin2(int n ,int k)
{
    index i,j;
    int B[0..n][0..k];

    for(i = 0; i <= n; i++){
        for(j = 0; j <= minimum(i,k); j++){
            if(j == 0 || j == i)
                B[i][j] = 1;
            else
                B[i][j] = B[i-1][j-1] + B[i-1][j];
        }
    }
    return B[n][k];
}