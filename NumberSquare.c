#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of rows : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)  //print the rows
    {
        for(int j=1; j<=n; j++)  // print the columns
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}