#include<iostream>
#include<string>

using namespace std;

//��������
void bubble_Sort(int arr[],int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

//��������
void merge(int arr[], int l, int mid, int r) {
	int* sorted = new int[r - l + 1];

	int i, j, k;
	i = l;
	j = mid + 1;
	k = 0;

	//������ �����ҋ�����
	while (i <= mid && j <= r) {
		if (arr[i] <= arr[j])
			sorted[k++] = arr[i++];
		else
			sorted[k++] = arr[j++];
	}

	//������ ����ִٸ�
	while (i <= mid) {
		sorted[k++] = arr[i++];
	}
	
	//�������� ����ִٸ�
	while (j <= r) {
		sorted[k++] = arr[j++];
	}
	k--;

	//���� ���
	for (int m = 0; m <= k; m++) {
		arr[l + m] = sorted[m];
	}

	delete[] sorted;
}
void merge_Sort(int arr[],int l,int r) {
	if (l < r) {
		//int mid = l + r / 2;
		int mid = l + (r - l) / 2; //overflow ����
		
		merge_Sort(arr, l, mid);
		merge_Sort(arr, mid+1, r);

		merge(arr, l, mid, r);
		
	}
}


//�⺻ ��� ���� (�ڿ��� ����)
void counting_Sort(int arr[],int n) {
	const int MAX = 10001; 
	int count[MAX] = { 0 };  


	for (int i = 0; i < n; i++) {
		count[arr[i]]++;
	}

	for (int i = 1; i < MAX; i++) {
		while (count[i] > 0) {
			cout << i << '\n';
			count[i]--;
		}
	}
}

//������ ��� ����
void stableCountingSort(int arr[], int n) {
	const int MAX = 10001;
	int count[MAX] = { 0 };
	int* output = new int[n];

	// 1. ī����
	for (int i = 0; i < n; i++) {
		count[arr[i]]++;
	}

	// 2. ������ ���
	for (int i = 1; i < MAX; i++) {
		count[i] += count[i - 1];
	}

	// 3. �ڿ������� ���� ����
	for (int i = n - 1; i >= 0; i--) {
		output[count[arr[i]] - 1] = arr[i];
		count[arr[i]]--;
	}

	// 4. ��� ���� (�Ǵ� �ٷ� ���)
	for (int i = 0; i < n; i++) {
		arr[i] = output[i]; // ���� �迭 ������Ʈ
	}

	delete[] output;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	return 0;
}