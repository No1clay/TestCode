#include<iostream>
using namespace std;
int main(){
	volatile const int i = 0;
	int *j = (int *)&i;
	*j = 1;
	cout << i << "," << *j << endl;
	cout << &i << "," << j << endl; 
	return 0; 
} 
//解答：
/*const修饰的常量值具有不可变性,
c++编译器通常会对该变量做优化处理，
在编译时变量i的值为已知的，
编译器直接将printf输出的变量i替换为0。
尽管如此，编译器仍然会为变量i分配
存储空间，通过修改内存的hack方式将
变量i在内存中的值修改后并不影响printf的输出。
如果将i更改为volatile const int类型的，
编译器就不会对变量i做优化，printf输出的结果就为1。
*/ 

/*
int volatile nVint;

>>>>；当要求使用volatile 声明的变量的值的时候，系统总
是重新从它所在的内存读取数据，即使它前面的指令刚刚从
该处读取过数据。而且读取的数据立刻被保存。

例如：

volatile int i=10;

int a = i;

...

//其他代码，并未明确告诉编译器，对i进行过操作

int b = i;

>>>>volatile 指出 i是随时可能发生变化的，每次使用它
的时候必须从i的地址中读取，因而编译器生成的汇编代码
会重新从i的地址读取数据放在b中。而优化做法是，由于编
译器发现两次从i读数据的代码之间的代码没有对i进行过操
作，它会自动把上次读的数据放在b中。而不是重新从i里面
读。这样一来，如果i是一个寄存器变量或者表示一个端口
数据就容易出错，所以说volatile可以保证对特殊地址的
稳定访问。
*/
