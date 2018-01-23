#include <stdio.h>
int main()
{
    int number, i, r, result = 0;
    printf("Enter a 3 digit integer: ");
    scanf("%d", &number);
    i = number;
    while (i != 0)
    {
        r = i%10;
        result += r*r*r;
        i /= 10;
    }
    if(result == number)
        printf("%d  Armstrong number.",number);
    else
        printf("%d  Armstrong number.",number);

    return 0;
}
