#include<stdio.h>
#include<time.h>
int main( )
{
    float t1,t2,t3;
    int i,j,a[1000][1000];
    t1=clock( );
    for(i=0;i<1000;i++)
    {
        for(j=0;j<1000;j++)
        {
            a[j][i]=1;
        }
    }
    t2=clock( );
    t3=(float)(((t2-t1)/CLOCKS_PER_SEC)*1000);
    printf("\nTime taken = %f milliseconds\n",t3);
    return 0;
}
