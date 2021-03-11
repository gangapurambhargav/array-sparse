#include<stdio.h>
#include<conio.h>

void main()
{
    int m,n,i,j,a[10][10],b[10][10];
    printf("Enter the no.of rows and columns");
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++>)
        {
            scanf("%d",&a[i][j])
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i]!=0)
            {
                b[1][s]=i;
                b[2][s]=j;
                b[3][s]=a[i][j];
            }
        }
    }
    printf("Resultant matrix is:");
    for(i=1;i<3;i++)
    {
        printf("\n");
        for(j=1;j<=s;j++)
        {
            printf("%d",b[i][j]);
        }
    }
}