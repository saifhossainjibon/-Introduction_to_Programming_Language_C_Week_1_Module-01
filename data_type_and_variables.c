#include <stdio.h>

int main()
{
    // integer numbers declare (%d)
    int a;
    char ch;
    float b;
    double c;
    scanf("%d", &a);
    getchar();
    scanf("%c", &ch);
    scanf("%f %lf", &b, &c);
    printf("%05d %c %.2f %.5lf", a, ch, b, c);

    // char  (%d)
    // Short int  (%d)
    // int %d
    // long int %ld
    // long long int %lld
    // char %c
    // float %f
    // double %Lf
    // long double int %Lf

    // scanf("%d",&n);
    // printf("%d",n+1);
    return 0;
}
