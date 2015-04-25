/*
 ============================================================================
 Name        : c.c
 Author      : mihai cornel
 Version     :
 Copyright   : Your copyright notice
 Description : Builduing simple linked list in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct list_el{
	int val;
	char nume[32];
	struct list_el *next;
};

typedef struct list_el item;

int main(void) {
	puts("!!!Salut din linked-list !!!"); /* prints !!!Hello World!!! */

	item *curr, *head;
	int i;

	head=NULL;

	for(i=1;i<10;i++){
		curr=(item*)malloc(sizeof(item));
		curr->val=i;
		printf("Introduce-ti numele dvs: ");
		scanf("%s", curr->nume);
		curr->next=head;
		head=curr;
	}
	curr=head;
	while(curr){
		printf("%d = %s \n", curr->val, curr->nume);
		curr=curr->next;
	}

	return EXIT_SUCCESS;
}
