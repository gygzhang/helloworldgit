#include<stdio.h>
#include<stdlib.h>
int main(){
	//better to use absolute path
	FILE* fp = fopen("/home/info.txt","r");
	char *name = (char*)malloc(sizeof(char)*200);
	char *num = (char*)malloc(sizeof(char)*200);
	char *class = (char*)malloc(sizeof(char)*200);
	char *info = (char*)malloc(sizeof(char)*200);
	//fscanf(fp,"%s %s %s",name,num,class);
	fgets(info,100,fp);
	//printf("hello world!\n%s,%s,%s\n",name,num,class);
	printf("hello world!\n%s\n",info);
	printf("some modification");
	return 0;
}
