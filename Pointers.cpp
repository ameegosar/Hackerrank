#include <stdio.h>

void update(int *a,int *b) {
    int c, d;
    c = *a;
    d = *b;
    *a = c + d;
    if(c>d)
    *b = c -d;
    else
        *b = d - c;
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
