#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of rows : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d  ",j);
        }
        printf("\n");
    }
    return 0;
}