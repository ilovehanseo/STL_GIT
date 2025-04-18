#include<iostream>
#include<string>
#include<map>
//map�� �Է¹��� ������ �ڵ����� 0 �ʱ�ȭ ! 
#include<vector>
#include<algorithm>
#include<cmath>

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)

using namespace std;

//��Ī����  ->  Vec<int> v; 
template<typename T>
using Vec = vector<T>;


//������ ����
// ������, �߾Ӱ�, �ֺ�, ����
//int main() {
//
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int n, sum = 0;
//	cin >> n;
//
//	vector<int> num(n);
//
//	for (int i = 0; i < n; i++) {
//		cin >> num[i];
//		sum += num[i];
//	}
//
//	if (n == 1) {
//		for (int i = 0; i < 3; i++)
//			cout << num[0] << '\n';
//		cout << 0;
//		return 0;
//	}
//
//	double first = sum / (double)n;
//	first = round(first);
//
//	
//		
//
//	sort(num.begin(), num.end());
//
//	int second = num[n / 2];
//
//	int cnt = 0, max = 0;
//	vector<int> bean;
//	for (int i = 0; i < n - 1; i++) {
//		if (num[i] == num[i + 1]) {
//			cnt++;
//		}
//		else {
//			if (max < cnt) {
//				bean.clear();
//			}
//			if (max <= cnt && cnt != 0) {
//				max = cnt;
//				bean.push_back(num[i]);
//			}
//			cnt = 0;
//			
//		}
//	}
//	if (max < cnt) {
//		bean.clear();
//	}
//	if (max <= cnt && cnt != 0) {
//		max = cnt;
//		bean.push_back(num[n - 1]);
//	}
//	
//
//	int third = 0;
//	
//	if (bean.size() >= 2) {
//		third = bean[1];
//	}
//	else if (bean.size() == 1) {
//		third = bean.front();
//	}
//	else {
//		third = num[1];
//	}
//
//	int fourth = num.back() - num.front();
//	
//	if (first == 0) {
//		cout << 0;
//	}
//	else
//		cout << first;
//	cout << '\n' << second << '\n' << third << '\n' << fourth << '\n';
//
//
//
//	return 0;
//}

//map , �����Լ�
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int n, m;
//	cin >> n >> m;
//
//	string word;
//
//	map<string, int> book;
//
//	for (int i = 0; i < n; i++) {
//		cin >> word;
//		size_t size = word.length();
//		if (size >= m) {
//			book[word]++;
//		}
//	}
//	//map�� sort�Լ��� ������ �Ұ�
//	vector<pair<string, int>> v(book.begin(), book.end());
//	
//	sort(v.begin(), v.end(), [](auto& a, auto& b) {
//		if (a.second != b.second)
//			return a.second > b.second;  //���� ������ �տ�
//		else if (a.first.length() != b.first.length())
//			return a.first.length() > b.first.length();  //�ܾ ��� �տ�
//		else
//			return a.first < b.first; //���������� ��ġ
//
//		});
//
//	for (auto i : v) {
//		cout << i.first << '\n';
//	}
//
//	return 0;
//}

//����Լ�
long long factorial(long long num) {
	if (num == 0) {
		return 1;
	}
	return num * factorial(num - 1);
}

int Pivonachi(int num) {
	if (num < 3)
		return 1;
	else
		return Pivonachi(num - 1) + Pivonachi(num - 2);
}

void KanTor(string& str) {

	string str1 = str;
	str1 = str.substr(0, str.length() / 3);
	size_t len = str1.length();
	string str2(len, ' ');
	string str3 = str1;
	//str3 = str.substr(str.length() * 2 / 3, str.length());

	//��� str���� str1�� �ƴ϶� -> str�� ũ��� ����ҋ����� ����
	if (str.length() == 1)
		return;
	else {
		KanTor(str1);
		KanTor(str3);

		str = str1 + str2 + str3; //����Լ��� �ڽ� ����, ��ġ�°� ������(������)
	}
}



void Square_Star(vector<string>& star,int l,int r,int n,int m,int nm) {
	if (nm>=3) {
		int lblank_in = (n - l + 1) / 3 + l;
		int rblank_in = (m - r + 1) / 3 + r;
		int lblank_out = (n - l + 1) / 3*2 + l;
		int rblank_out = (m - r + 1) / 3*2 + r;
		FOR(i, l, n) {
			FOR(j, r, m) {
				if (i >= lblank_in && i < lblank_out && j >= rblank_in && j < rblank_out) {
					star[i][j] = ' ';
				}
		//i%nm/3 ==0 -> ��ȣ �켱���� 
				if ((i % (nm/3) == 0) && (j % (nm/3) == 0) && (nm / 3 + i<=star.size())&& (nm / 3 + j<=star.size()) && nm/3!=1){
					//cout << "i, j =" << i <<" " << j << '\n';
					Square_Star(star, i, j, nm / 3 + i, nm / 3 + j, nm / 3);
				}
			}
		}

	}
	else {
		return;
	}
}


//�ϳ����� ž�� �ٽ� : ���� ū ���� 1���� end�� ���϶�����,
//������ ��� ���ݵ��� �ٸ� ��(other)�� ���δ�.

void Hanoi(int start,int end,int other,int size) {
	if (size == 0)
		return;
	Hanoi(start, other,end , size - 1); //���� -> �ٸ� ��(������)
	cout << start << " " << end << '\n';  //�̵�
	Hanoi(other, end, start, size - 1); //�ٸ� ��(������) -> end
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	cout << (int)pow(2, n) - 1 << '\n';
	Hanoi(1, 3, 2, n);
	//cout << cnt << '\n';
	
	/*Vec<string> StarBox(n, string(n, '*'));

	Square_Star(StarBox, 0, 0,n,n,n);
	
	for (auto& i : StarBox) {
		cout << i<<'\n';
	}*/


	
	
	return 0;
}