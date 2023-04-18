//input size = n (배열의 길이)
//basic operation = x == S[mid] & x < S[mid] (가장 많이 실행되는 것)
//worst-case는 if n is a power of 2

void mergesort(int n, keytype S[])
{
    if(n > 1){
        const int h = ⌊n/2⌋, m = n - h;
        keytype U[1..h], V[1..m]

        copy S[1] through S[h] to U[1] through U[h];
        copy S[h+1] through S[n] to V[1] through V[m];
        mergesort(h, U);
        mergesort(m, V);
        merge(h, m, U, V, S);
    }

}

// U[i..h], V[j..m] -> S[k..h+m]
void merge(int h, int m, const keytype U[], const keytype V[], keytype S[])
{
    index i, j, k;

    i = 1; j = 1; k = 1;
    while(i <= h  && j <= m){
        if(U[i] < V[j]){
            S[k] = U[i]; i++;
        }
        else{
            S[k] = V[j]; j++;
        }
        k++;
    }
    if(i > h)
        copy V[j] through V[m] to S[k] through S[h+m];
    else
        copy U[i] through U[h] to S[k] through S[h+m];
}
---------------------------------------------------------------------------------------------------

//사용되는 메모리를 줄인 버전
void mergesort2(int low, index high)
{
    index mid;

    if(low < high){
        mid = ⌊(low + high) / 2⌋;
        mergesort2(low, mid);
        mergesort2(mid+1, high);
        merge2(low, mid, high);
    }
}
void merge2(index low, index mid, index high)
{
    index i, j, k;
    keytype U[low..high]; //temporary array

    i = low; j = mid + 1; k = low;
    while(i <= mid  && j <= high){
        if(S[i] < S[j]){
            U[k] = S[i]; i++;
        }
        else{
            U[k] = S[j]; j++;
        }
        k++;
    }
    if(i > mid)
        move S[j] through S[high] to U[k] through U[high];
    else
        move S[i] through S[mid] to U[k] through U[high];
    move U[low] through U[high] to S[low] through S[high];
}