#include<iostream>
using namespace std;
struct test{
	int w[10];//40���ֽ� 
};
int main(int argc, char **argv){
	test one;
	int a[6] = {1, 2, 3, 4, 3, 9}; 
	int *ptr = (int *)(&a + 1);//��ַ��һ���Ǽ���16 
	cout << *(ptr - 1) << endl;
	cout << &a << endl << &a + 1 << endl << &a + 2 << endl;
	
	cout << "************************" << endl;
	cout << &one << endl << &one + 1 << endl << &one + 2 << endl;
	 
	
	//&a�ǰ����鿴��һ�����壬&a+1��������
	//����ĳ���ָ�����һ�����ֵ���һ�����͡�
	//*(ptr-1)�����ٺ���һ�����ͣ�Ҳ���������
	//���һ��Ԫ�ء�
} 

