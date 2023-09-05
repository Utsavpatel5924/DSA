#include <stdio.h> 
 #include <stdlib.h> 
  
 struct node 
 { 
     int data; 
     struct node *next; 
 }; 
  
 struct node *head = NULL; 
  
 void insertEnd(int val) 
 { 
     struct node *temp = malloc(sizeof(struct node)); 
     struct node *ptr = head; 
     temp->data = val; 
  
     if (head == NULL) 
     { 
         temp->next = temp; 
         head = temp; 
     } 
     else 
     { 
         while (ptr->next != head) 
         { 
             ptr = ptr->next; 
         } 
         ptr->next = temp; 
         temp->next = head; 
     } 
 } 
  
 void deleteEnd() 
 { 
     struct node *ptr = head; 
     struct node *p; 
     if (ptr->next == head) 
     { 
         head = NULL; 
         free(ptr); 
         return; 
     } 
     while (ptr->next != head) 
     { 
         p = ptr; 
         ptr = ptr->next; 
     } 
     p->next = head; 
     free(ptr); 
     return; 
 } 
  
 void Firstinsert(int val) 
 { 
     struct node *ptr = head; 
     struct node *temp = malloc(sizeof(struct node)); 
     temp->data = val; 
     while (ptr->next != head) 
     { 
         ptr = ptr->next; 
     } 
     temp->next = head; 
     head = temp; 
     ptr->next = head; 
 } 
void Midinsert(int val, int pos) {
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    while (ptr->data != pos) {
        ptr = ptr->next;
    }

    temp->next = ptr->next;
    ptr->next = temp;
}
void Middelete(int pos) {
    struct node *ptr = head;
    struct node *p = NULL;

    if (ptr == NULL) {
        printf("List is empty...");
        return;
    }

    while (ptr != NULL && ptr->data != pos) {
        p = ptr;
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("Element not found in the list.");
        return;
    }

    if (p == NULL) {
        head = ptr->next;
    } else {
        p->next = ptr->next;
    }

    free(ptr);
}

  
 void Firstdelete() 
 { 
     if (head == NULL) 
     { 
         printf("List is empty, nothing to delete.\n"); 
         return; 
     } 
     struct node *p = head; 
     struct node *ptr = head; 
     while (ptr->next != head) 
     { 
         ptr = ptr->next; 
     } 
     if (ptr == head) 
     { 
         head = NULL; 
     } 
     else 
     { 
         head = head->next; 
         ptr->next = head; 
     } 
     free(p); 
 } 
  
 void display() 
 { 
     struct node *ptr = head; 
  
     if (head == NULL) 
     { 
         printf("List is empty.\n"); 
         return; 
     } 
  
     do 
     { 
         printf("%d ", ptr->data); 
         ptr = ptr->next; 
     } while (ptr != head); 
  
     printf("\n"); 
 } 
  
 int main()
 {
    int ch;

    printf("\n1. InsertEnd ");
    printf("\n2. DeleteEnd ");
    printf("\n3. Display ");
    printf("\n4. FirstInsert ");
    printf("\n5. FirstDelete ");
    printf("\n6. Mid insert  ");
    printf("\n7. Mid Delete  "); // Add option for Mid Delete
    printf("\n8. End Program ");

    do {
        int x, pos;
        printf("\nEnter your choice :");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter Your Value :");
                scanf("%d", &x);
                insertEnd(x);
                break;
            case 2:
                deleteEnd();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Enter Your Value :");
                scanf("%d", &x);
                Firstinsert(x);
                break;
            case 5:
                Firstdelete();
                break;
            case 6:
                printf("Enter your Value :");
                scanf("%d", &x);
                printf("Enter Position :");
                scanf("%d", &pos);
                Midinsert(x, pos);
                break;
            case 7:
                printf("Enter Position to delete :");
                scanf("%d", &pos);
                Middelete(pos);
                break;
            case 8:
                printf("Program is closed.");
                break;
            default:
                printf("You Entered Wrong Choice.");
                break;
        }
    } while (ch != 8);

    return 0;
}
