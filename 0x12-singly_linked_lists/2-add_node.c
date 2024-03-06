#include<stdlib>
#include "lists.h"

list_t *add_node(list_t **head, const char *str){
	lists* tmp ;
	tmp -> str = strdup(str);
	tmp->len = strlen(str);
	tmp -> next = head->next ;
	head->next = tmp ;
	return head ;
}
