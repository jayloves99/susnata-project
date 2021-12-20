#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//1st create structure
// struct Node{};
struct Node{
    int data; // take data
    struct Node * next; // this next part can take a Node type structure  
};


int main(){
	
	//initialize pointer
    struct Node * head;
    struct Node * second;
    struct Node * third;

    //allocate memory location in heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));

    //1st & 2nd link
    head->data = 7;
    head->next = second;

    //1st & 2nd link
    second->data = 17;
    second->next = third;

    //1st & 2nd link
    third->data = 27;
    third->next = NULL;

    LinkedListPrint(head);

    return 0;

}

void LinkedListPrint(struct Node *ptr)
{
	int sum = 0;
    while(ptr != NULL)
    {
    	sum = sum + ptr->data;
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    
    printf("\nsum is %d", sum);
}

