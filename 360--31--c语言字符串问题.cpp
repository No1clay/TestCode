#include<stdio.h>
char *myString(){
	char buffer[6] = {0};
	char *s = "Hello World!";
	for(int i = 0;i < sizeof(buffer) - 1;i++){
		buffer[i] = *(s + i);
	}
	return buffer;
}
int main(){
	char *name;
	name = myString();
	printf("%s\n",name);
	return 0;
	/*����char *myString()��û��ʹ��new����
	malloc�����ڴ棬����buffer������ڴ�������ջ��
	����char *myString()�Ľ�����ջ���ڴ��ͷţ�
	�ַ�����Ҳ�Ͳ������ˣ����Ի����Ұָ�룬������δ֪ 
	*/
} 
