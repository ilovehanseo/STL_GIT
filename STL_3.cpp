#include<iostream>
using namespace std;

//int main() {
//
//	//���� ���, c���� ��� �Ұ���
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int a = 1, b = 1;
//
//	while (1) {
//		cin >> a >> b;
//		if (cin.eof()) break;   //end of file -> �� �̻� ���� �����Ͱ� ���� �� �߻�
//		cout << a + b << "\n";
//	}
//
//	return 0;
//
//}

//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	
//	int n,v,cnt=0;
//	int arr[100];
//	fill(arr, arr + 100, 101); //�ʱ�ȭ�� ���ϴ� ������ġ, ����ġ, ���ϴ� �ʱ�ȭ ��
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	cin >> v;
//
//	for (int i : arr) {
//		if (v == i)
//			cnt++;
//	}
//
//	cout << cnt << endl;
//
//	return 0;
//}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned long long n;
	long long max, min;
	cin >> n;

	int flag = 0;

	long long* arr = new long long[n];
	for (long long i = 0; i < n; i++) {
		cin >> arr[i];
		if (!flag) {
			max = arr[i];
			min = arr[i];
		}
		flag++;

	}

	for (long long i = 0; i < n; i++) {
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}

	cout << min <<" " << max << endl;

	delete[] arr;

	return 0;
}