#include <stdio.h>
 
    void update(int *a,int *b) {
    int tempa =*a;
   *a = (*a)+(*b);   //= 4+5 = 9
    *b = abs(tempa - *b );   //4-5 =-1
    }
int main() {
    int a,b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
