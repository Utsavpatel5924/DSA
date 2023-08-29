#include<stdio.h>
#include<stdlib.h>
#define n 10
int a[n],i,j;

int bubblesort(int t[], int r)
{
    int k;
    for ( i =0; i < r ; i++)
    {
        for(j =0 ; j< r - 1; j++ )
        {
                if(t[j] > t[j+1])
                {
                    k = t[j];
                    t[j] = t[j+1];
                    t[j + 1] = k;
                }
        }
    }
}
int main()
{
    for(i=0; i<n; i++)
    {
        a[i] = rand()%50 + 1;
    }

    for ( i =0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    bubblesort(a ,n);

    printf("\n sort array index is : ");
    for(i =0; i< n ; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}