#include<iostream>
#include<string>
#include<cmath>

using namespace std;

//�ð� ���⵵
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	//sum = pow(n, 3);  -> pow�� ��ȯŸ���� double�̹Ƿ� �ε��Ҽ��� �ٻ簪 ��ȯ ( ����Ȯ�� )
//	//sum = n * n * n;  -> ��Ȯ�� ���
//
//	//c++ ���� ��ȯ
//	//static_cast<type>(value)
//
//	return 0;
//} 



//���Ʈ ���� �˰���
//��� ��츦 ������������ Ž��
//brute force -> ������ �� -> "���Ʈ ������ ��������, ���δ� ������ �ذ�å�̴�!"

bool end_judge(int n) {

	//int -> string���� ���� = to_string
	//string -> int�� ���� = stoi

	//sol1) ����
	string str = to_string(n);
	return str.find("666") != string::npos;

	//sol2) �ð��ʰ�
	/*int cnt = 0;
	while (n > 0) {
		if (n % 10 == 6) {
			cnt++;
			n /= 10;
		}
		else
			cnt = 0;
		if (cnt == 3)
			return true;
	}*/
}

//bool multiple_Jug(int n) {
//	for (int x = 0; x <= 2000; x++) {
//		for (int y = 0; y <= 1000; y++) {
//			if (3 * x + 5 * y == n) {
//				return true;
//			}
//		}
//	}
//	return false;
//}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	//����1
	//for (int i = 0; i < n; i++) {
	//	for (int j = i+1; j < n; j++) {
	//		for (int k = j+1; k < n; k++) {
	//			sum = arr[i] + arr[j] + arr[k];
	//			if (sum <= m && max<sum) {
	//				max = sum;
	//			}
	//		}
	//	}
	//}

	int n, cnt = 0;
	cin >> n;
	int three = n / 3; // 6
	int five = n / 5;  //3
	
	int result = 0, min = INT_MAX;
	for (int i = 0; i <= five; i++) {
		for (int j = 0; j <= three; j++) {
			result = 5 * i + 3 * j;
			if (result == n) {
				cnt = i + j;
				if (min > cnt)
					min = cnt;
			}
		}
	}
	if (min!=INT_MAX)
		cout << min;
	else
		cout << -1;
	return 0;
}