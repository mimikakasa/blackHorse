#include<iostream>
using namespace std;

//����ģ��
template<typename T>//����һ��ģ�� ���߱�������������н����ŵ�T��Ҫ���� Tͨ����������
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;

	//���ú���ģ�彻��
	//1.�Զ������Ƶ�
	//mySwap(a, b);
	//cout << "a=" << a << "  " << "b=" << b;

	//2.��ʾָ������
	mySwap<int>(a, b);
	cout << "a=" << a << "  " << "b=" << b;
}

int main()
{
	test01();

	system("pause");
	return 0;
}