//input size = n (배열의 길이)
//basic operation = result = result + S[i];
//every-case time complexity = T(n) = n


//add all the numbers in the array S of n numbers
//n은 배열 길이

number sum(int n, const number S[]){
    index i;
    number result;

    result = 0;
    for(int i = 1, i <= n, i++)
        result = result + S[i];
    
    return result;
}