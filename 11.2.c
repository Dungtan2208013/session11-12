#include<stdio.h>

int main(){
	char alp[26];
	int i,j;
	for(i=65,j=0;i<91;i++,j++)
	{
		alp[j] =i;
		printf("the character now assigned is %c \n",alp[j]);
		}
		getchar();
	}
