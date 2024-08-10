#include <stdio.h>

int main()
{
    int x, a, b;

    while(scanf("%d", &x) != EOF){
        a = 2;
        b = 1;

        while(a != 1){
            if(a <= x/2){
                a += a;
            }
            else{
                a -= (x - a + 1);
            }
            b++;
        }
        printf("%d\n", b);
    }

    return 0;
}
