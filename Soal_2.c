#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long a, b, c;
    long long temp;
    
    scanf("%lld" "%lld" "%lld", &a, &b, &c);
    
    if(a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if(a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    
    long long kiri = b - a;
    long long kanan = c - b;
    
    if (kiri < kanan)
        printf("%lld\n", kiri);
    else
        printf("%lld\n", kanan);
        
    return 0;
}
