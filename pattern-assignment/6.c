#include <stdio.h>

int main()
{
    int i,j,num=65;
    for(i=65;i<=68;i)
    {
        for(j=65;j<=i+num-1;j++)
        {
         printf("%c ",j);
         
         
        }
         printf("\n");
    }

    return 0;
}
