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

