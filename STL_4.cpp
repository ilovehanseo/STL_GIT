#include<iostream>
#include<string>

using namespace std;

//int main() {       //�⼮ Ȯ�� ���� ���̵�� ������
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	
//	bool sign[30] = { 0 };
//	int student[28];
//
//	for (int i = 0; i < 28; i++) {
//		cin >> student[i];
//		sign[student[i] - 1] = true;
//	}
//	for (int i = 0; i < 30; i++) {
//		if (!sign[i]) {
//			cout << i + 1 << endl;
//		}
//	}
//
//	return 0;
//}


//���ڿ� �Է� -> getline
//cin.getline(������ , �ִ�ũ��)
//cin.getline(str, 1000);  -> char[] Ÿ�Ը� ��� ����
// //getline(cin, str);  string �������� �Է¹޴¹��

//size_t -> �迭�� ũ��, �޸� �Ҵ� ũ��, ���ڿ� ���̿� ���
//������ �ƴ� �� ǥ��, �ý��ۿ� ���� ũ�Ⱑ �޶��� - > ȣȯ�� ����

//string + strin (����)
//string + char (����)
//char + char (�Ұ���)

//���ĺ� ã�� ����
//int main() {
//	
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, sum=0;
//
//	string str;
//	cin >> str;
//	
//	size_t len = str.length();
//
//	for (int i = 0; i < 26; i++) {
//		size_t pos = str.find(i + 97);
//		if (pos == string::npos)  //string::npos = size_t Ÿ���� �ִ밪
//			cout << -1 << " ";
//		else
//			cout << pos << " ";
//
//	}
//	//a = 97
//
//
//
//	return 0;
//}

//cin�� �������� �Է��� �и��ϴ� ������ ��. 
//' ' ������ �ƽ�Ű�ڵ尪�� 32

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;

	while (1) {
		getline(cin, str);
		if (cin.eof())
			break;
		cout << str << endl;
	}
	

	return 0;

}