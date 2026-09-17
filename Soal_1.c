#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    
    long long sum =0;
    long long A;
    
    for (int i = 0; i < N; i++){
        scanf("%ldd", &A);
        sum += A;
    }
    
    printf("%lld\n", llabs(sum));
    
    return 0;
}
