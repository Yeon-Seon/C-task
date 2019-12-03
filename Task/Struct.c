#include<stdio.h>	
#include<stdlib.h>
#include<string.h>

struct linked_list	 {
	char *name;
	struct linked_list *next);
};
typedef struct linked_list NODE;
typedef NODE * LINK;

LINK createNode(char *name);
LINK append(LINK head, LINK cur);
int printList(LINK head);
LINK freeList(LINK head);

int main() {
	
}

LINK createNode(char *name) {
	LINK cur;
	cur = (NODE *)malloc(sizeof(NODE));
	if (cur == NULL) {
		printf("Error");
		return NULL;
	}
	cur->name = (char *)malloc(sizeof(char) * strlen(name) * 1);
	strcpy(cur->name, name);
	cur->next = NULL;
	return cur;
}

LINK append(LINK head, LINK cur) {     
	LINK nextNode = head;
	if (head == NULL) {
		head = cur;
		return head;
	}
	while (nextNode->next != NULL) {
		nextNode = nextNode->next;
	}
	nextNode->next = cur;
	return head;

}

int printList(LINK head) {
	int cnt = 0; 
	LINK nextNode = head;

	while (nextNode != NULL) {
		printf("%d번째 노드는 %s\n", ++cnt, nextNode->name);
		nextNode = nextNode->next;

	}
	return cnt;
}

LINK freeList(LINK head) {
	LINK nextNode;
	while (head->next != NULL) {
		nextNode = head; 

	}
}