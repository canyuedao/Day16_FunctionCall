// Day16_FunctionCall.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>

//struct strct_test{
//	int a;
//	char c;
//	bool b;
//};
//strct_test change(int a,char c,bool b){
//	strct_test test;
//	test.a=a;
//	test.b=b;
//	test.c=c;
//	return test;
//}

//char* getString(){
//	char s[]="Hello World!";
//	return s;
//}

//void prin(char* a){
//
//}

void getMemorry(char *p){
	p=(char*)(&p+0x1);
	*(char**)p=(char*)malloc(100);
	//memset(p,0,100);
}
int _tmain(int argc, _TCHAR* argv[])
{
	
	//change(10,'c',1);
	/*char* p=getString();
	printf("%s",p);*/

	char *str=NULL;
	getMemorry(str);
	strcpy(str,"Hello World!");
	char *str2=NULL;
	//getMemorry(str2);
	//strcpy(str2,"Hello!");
	printf(str);
	return 0;
}

