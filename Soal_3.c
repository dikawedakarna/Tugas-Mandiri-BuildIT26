#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    const long long *x = (const long long *)a;
    const long long *y = (const long long *)b;

    if (*x < *y) return -1;
    if (*x > *y) return 1;
    return 0;
}

int main() {
    int N;
    scanf("%d", &N);

    long long *A = malloc(N * sizeof(long long));

    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }

    qsort(A, N, sizeof(long long), compare);

    long long ans = 0;
    long long same = 0;

    for (int i = 0; i < N; i++) {
        if (i > 0 && A[i] == A[i - 1]) {
            // tidak melakukan apa-apa
        } else {
            same = i;
        }

        ans = (ans + same) % 1000000007;
    }

    printf("%lld\n", ans);

    free(A);

    return 0;
}
