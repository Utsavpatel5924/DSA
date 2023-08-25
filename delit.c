#include <stdio.h>
#define n 5
int a[n];
int top = -1;
int display() {

  for (int i = 0; i <= top; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}
int insert(int val) {
  if (top >= n - 1) {
    printf("Array is full\n");
  } else {
    top++;
    a[top] = val;
  }
}
int delete() {
  if (top < 0) {
    printf("Array is empty\n");
  } else {
    int x = a[top];
    top--;
    return x;
  }
}

int main() {
//   insert(10);
//   insert(20); 
//   insert(30); 
//   insert(40); 
//   insert(50); 
//   insert(60); 
//   display();

//  int b;
//     b = delete(); 
//     b = delete();
//     b = delete();
//     display();
int ch;
    printf("1. Display");
    printf("\n2. Insert Array ");
    printf("\n3. Delete Array ");
    printf("\n0. End Program ");
    do{
        int val;
        printf("\nEnter your choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    display();
                    break;
            case 2:
                    printf("Enter Your Array :");
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
    }while(ch != 0);
    return 0;

  
}
