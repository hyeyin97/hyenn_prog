#include <stdio.h>
#define ll long long 
int main(void) {
    ll a, b, c; ll upNum = 1;
    scanf("%lld %lld %lld", &a, &b, &c);
    ll sellCost = c;
    ll totalCost = a + b;

    if (b >= c) {
        printf("%d\n", -1);
        return 0;
    }
    upNum = a / (c - b) + 1;
    printf("%lld\n", upNum);
    return 0;
}