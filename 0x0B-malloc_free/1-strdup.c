#include <stdio.h>
#include <stdlib.h>
#include "main.h"		
/**
 * _strdup - duplicate to new memory space location	
 * @str: char	
 * Return: 0		
 */
char *_strdup(char *str)		
{
int i = 0 ; 
while(*str)
{
 i++ ; 
 **str++ ; 
}
a = malloc((i+1)*sizeof(char));
for(k=0;k<i;k++)
{
 a[k] = str[k];
}
return(a);
}
