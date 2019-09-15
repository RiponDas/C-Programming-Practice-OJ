#include <stdio.h>
int mul(int a, int b)
{
    if (a < b)
    {
        return mul(b, a);
    }
    else if (b != 0)
    {
        return (a + mul(a, b - 1));
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a, b, result;
    scanf("%d%d", &a, &b);
    result = mul(a, b);
    printf("%d\n",result);
    return 0;
}



