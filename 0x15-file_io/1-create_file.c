#include"main.h"

/**
 * Create_file : Create a file
 * @filename : A pointer to the name of the file to create 
 * @text_content :  A pointer to a string to write the file 
 *
 * Return : if the functon fails : --1 
 *            otherwise -1
 */

int create_file(const char filename , char* textcontent)
{
	int fd,w,len=0;
	if (filename == NULL){
		return(-1)
	}
	if (textcontent != NULL)
	{
		fd = open(filename , O_CREAT | O_WRONLY | O_TRUNC , 0600);
	}
	if(fd == -1)
		return(-1);
	if(!text_content)
		text_content = "";
	for(w,text_content[w],w++);
	len = write(fd,text_content,w++);
	if(len==-1)
		return(-1);
	close(fd);
	return(1);
}

