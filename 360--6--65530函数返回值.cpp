#include<iostream>
using namespace std;
int func(int x) {
	int countx = 0;
	while(x) {
		countx++;
		x = x & (x - 1);
	}
	return countx;
}
int main() {
	int b = func(65530);//����65530�еĶ�������1�ĸ���
	//65530 = 1111 1111 1111 1010
	cout << b;

}
