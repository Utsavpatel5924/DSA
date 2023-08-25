#include<stdio.h>
#define n 10
int a[n],i;
int r=-1,f=-1;
int insert(int x)
{
    if(f<0 || r<0)
    {
        f=0,r=0;
        a[r]=x;
    }
    if(r > n-1)
    {
        printf("Queue is full.");
    }
    else{        
        r++;
        a[r]=x;
    }


}

int display()
{
    if(r<0 || f<0)
    {
        printf("Queue is Empty .");
    }
    else{
        for(i=f+1;i<r+1;i++)
        {
            printf("%d ",a[i]);
        }      
    }
}
int delete()
{
    if(f==r)
    {
        f=-1,r=-1;
    }
    if(f<0 || r<0)
    {
        printf("Queue is empty.");
    }
    else{
        f++;
    }
}
int main()
{
   

    int c;
    printf("1. Display\n");
    printf("2. Insert Queue\n");
    printf("3. Delete Queue\n");
    printf("0. End Program ");
    do{
        int val;
        printf("\nEnter your choice :");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                    display();
                    break;
            case 2:
                    printf("Enter Your Queue :");
                    scanf("%d",&val);
                    insert(val);
                    break;
            case 3:
                    delete();
                    break;
            case 0:
                    printf("Program is closed.");
                    break;
            default:
                    printf("You Enterd Wrong choice .");
                    break;
        }
    }while(c != 0);
    return 0;
}


