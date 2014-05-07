#include <stdio.h>
copyString(char *p1,char *p2) {
	while(*p1!='\0') {
		*p2=*p1;
		p1++;
		p2++;
	}
	*p2='\0';
}
int main(){
	int i = 10;
	//输出方式的错误
	printf("%s\n", i);
	int test[1];
	//往受到系统保护的内存地址写数据
	scanf("%d",test[0]);
	//数组越界
	printf("%d\n", test[1]);
	//地址错误
	char *a="I am a teacher.";
	char *b="You are a student.";
	printf("初始化后的字符串：\n%s\n%s\n",a,b);
	copyString(a,b);
	printf("复制后的字符串：\n%s\n%s\n",a,b);
}


