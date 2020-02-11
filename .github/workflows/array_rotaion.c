/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void a_rotation(int n,int a[])
{
    int x = a[0];
    for(int i=0;i<n-1;i++)
     {
         a[i] = a[i+1];
     }
     a[n-1] = x;
     
}


int main()
{
    int a[50];
    int n,m;
    printf("No.of.ele:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n no.of.rot:");
    scanf("%d",&m);
    for(int j=0;j<m;j++)
    {
       a_rotation(n,a);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}
