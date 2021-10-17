#include <stdio.h>
int main()
{
int n=8;
int a[] = {1, 7, 5, 6, 3, 2, 8, 9 };
int i, total;
total = (n + 1) * (n + 2) / 2;            
for (i = 0; i < n; i++)
total -= a[i];
printf("MISSING NUMBER:%d",total);

return 0;
}
