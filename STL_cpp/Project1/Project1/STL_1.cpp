#include<iostream>
using namespace std;
//�Լ� �����ε�
//�޼����� �̸��� ���� �Ű������� ������ ������ �ٸ����� �ϴ� ��
//�Լ� �������̵�
//��ӹ��� �޼����� ���븸 �����ϴ� ��

//���ø�
template <class Any>
Any sum(Any, Any);

int main() {
	int a = 3;
	int b = 4;

	cout << sum(a, b) << endl;

	float c = 3.14;
	float d = 5.14;

	cout << sum(c, d) << endl;
	//error
	//cout << sum(a, c) << endl;

	cout << "github test" << endl;
	//����
	//�̸� ���ǵ� ������ ���� �̸� ��� ����� �� �ִ� ��� �̸�
	cout << divide(a, b) << endl;

	return 0;
}

template<class Any>
Any sum(Any a, Any b) {
	return a + b;
}

template<class Few>
Few divide(Few a, Few b) {
	if (a > 0 && b > 0)
		return a / b;
	else
		cout << "�߸��� �Է�" << endl;
}