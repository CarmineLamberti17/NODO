
#include <stdio.h>
#include "nodo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void stampa(Nodo *list);

int main()
{
    Nodo *list = NULL;

    stampa(list);

    Nodo n1;
    n1.val = 2;
    n1.next = NULL;
    list = &n1;
    stampa(head);

    Nodo n2;
    n2.val = 3;
    n2.next = NULL;
    n1.next = &n2;
    stampa(head);

        Nodo n3;
    n3.val = 4;
    n3.next = NULL;
    n2.next = &n3 ;
    
    stampa(head);
    
     Nodo n4;
    n3.val = 4;
    n3.next = NULL;
    n3.next = &n4;
    
    stampa(head);
    
     Nodo n5;
    n3.val = 4;
    n3.next = NULL;
    n4.next = list;
    list = &n5;
    
    
	 stampa(head);
    
    return 0;
}


void stampa(Nodo *list)
{
    Nodo *temp;

    temp = list;
    while (temp != NULL) {
        printf("%d ---> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}
