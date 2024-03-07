list_t *add_node_end(list_t **head, const char *str){
	ptr = head ; 
	if(head->next == NULL){
		return NULL ; 
	else{
		while(ptr->next != NULL){
			ptr = ptr->next ; 
		}
		ptr->next->str = strdup(str);
		ptr->next->next= NULL ; 
		ptr->next->len = len(str);
		return head ; 
}
