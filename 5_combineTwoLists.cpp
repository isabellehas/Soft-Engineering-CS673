#include <iostream>
using namespace std;

struct ListNode
{
    char e;
    struct ListNode* next;
};

void insertElement(struct ListNode** head, char newElement)
{
    struct ListNode* curr = new ListNode;

    curr->e = newElement;
    curr->next = NULL;
    
    if(*head == NULL)
        *head=curr;
    
    else
    {
        ListNode* temp = *head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = curr;
    }
    
}

void display(struct ListNode**node)
{
    struct ListNode *temp= *node;
    cout << "[" ;
    while(temp!=NULL)
        {
            if(temp->next!=NULL)
            cout<<temp->e<<", ";
            else
            cout<<temp->e;
            
            temp=temp->next;
        }
    cout << "]" ;
    cout<<endl;
}

void mergeTwoLists(struct ListNode *A, struct ListNode **B)
{
     struct ListNode *current_inA = A, *current_inB = *B;
     struct ListNode *next_inA, *next_inB;
   
     while (current_inA && current_inB)
     {
         next_inA = current_inA->next;
         next_inB = current_inB->next;
         current_inB->next = next_inA;
         current_inA->next = current_inB;
         current_inA = next_inA;
         current_inB = next_inB;
    }
    *B = current_inB;
}

int main()
{
     struct ListNode *ListA = NULL, *ListB = NULL;
     insertElement(&ListA, 'a');
     insertElement(&ListA, 'b');
     insertElement(&ListA, 'c');
     
     insertElement(&ListB, '1');
     insertElement(&ListB, '2');
     insertElement(&ListB, '3');

     mergeTwoLists(ListA,&ListB);
     display(&ListA);

     return 0;
}
