size_t list_len(const list_t *h){
	size_t count ; 
	if(h->next == NULL) 
		return 0;
	else{
		while(h->next)
		{
			count ++ ; 
			h = h->next ; 
		}
		return count ; 
	}
}	
