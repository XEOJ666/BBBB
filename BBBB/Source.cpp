#include <stdio.h>
void BBBB(int);
int main() {
    int k;
 
    scanf_s("%d", &k);
    if (k > 0)
    {
        BBBB(k);
    }
    else
        printf("Error");
    return 0;
}

void BBBB(int k)
{
    int x = 2;
    while (k != 1) {
        while (k % x == 0) {
            printf("%d\n", x);
            k = k / x;
        }
        x++;
    }
}