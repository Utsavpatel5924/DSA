#include<stdio.h>
#define n 5
int a[n];
int top = -1,i;
int dispaly(){
    if(top<0)
       printf("array is empaty...");
    else{
       for(i=0;i<=top;i++){
        printf("%d\n",a[i]);
       }
    }
}
int inserted(int val){
    if(top>=n-1)
       printf("array is nfull...\n");
    else{
        top++;
        a[top]=val;
    }
}
int main()
{
    inserted(100);
    inserted(200);
    inserted(300);
    inserted(400);
    inserted(500);
    dispaly();

}