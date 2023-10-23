#include <stdio.h>

int main()
{
    printf("%c\n", 'P');
    printf("%s\n", "String");
    printf("%d\n", -123);
    printf("%u\n", 123);
    printf("%f\n", 1.23);
    printf("%%\n"); // %を表示

    printf("%5d", 123);  // 右詰め5桁 [  123]
    printf("%-5d", 123); // 左詰め5桁 [123  ]
    printf("%05d", 123); // 0埋め5桁 [00123]

    return 0;
}
