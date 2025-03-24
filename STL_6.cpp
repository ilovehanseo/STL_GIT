#include<iostream>
using namespace std;

//�����б�
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//		
//	string str[15];
//	int size[15];
//	int max = 0;
//
//	for (int i = 0; i < 5; i++) {
//		cin >> str[i];
//		size[i] = str[i].length();
//		if (max < size[i])
//			max = size[i];
//	}
//
//	for (int i = 0; i < max; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (i<str[j].length())  //�ش� ���ڿ��� ���̸� ���� �ʴ� ��츸 ���
//				cout << str[j][i];
//		}
//	}
//
//
//	return 0;
//}


//���ӵ� �ܾ� üũ �� �� Ǭ��?

bool Group_Word(string);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, cnt = 0;
	cin >> n;

	string str;

	for (int i = 0; i < n; i++) {
		cin >> str;
		if (Group_Word(str))
			cnt++;
	}

	cout << cnt;

	return 0;
}

bool Group_Word(string str) {
	int alpha[26] = { 0 };
	size_t size = str.length();

	for (char ch : str) { //���ĺ��� ����
		alpha[ch - 'a']++;
	}

	for (int i = 0; i < size;) {
		int eng_cnt = alpha[str[i] - 'a'];
		for (int j = i; j < i + eng_cnt; j++) { //������ŭ �̵�
			if (str[i] != str[j]) {
				//cout << "�������� �ʽ��ϴ�" << endl;
				return false;
			}
		}
		i += eng_cnt;
	}
	return true;


}
