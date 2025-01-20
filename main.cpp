#include <iostream>

using namespace std;

void average(int*& arr, int& n, float& Newaverage);
void bubbleSort(int arr[], int n, bool ascending);

int main()
{
	int n;
	cout << "평균을 구하려는 학생의 수를 입력하시오" << endl;
	cin >> n;



	//초기화
	float avg = 0;
	int* arr = nullptr;

	average(arr, n, avg);
	cout << "입력하신 " << n << "명의 성적의 평균은" << endl << avg << "입니다." << endl;

	int choice;
	cout << "학생들의 성적 정렬 방향을 선택하세요 (숫자 1 오름차순, 숫자 2 내림차순 입니다.): ";
	cin >> choice;

	bool ascending = (choice == 1);



	//정렬
	bubbleSort(arr, n, ascending);

	cout << "정렬된 배열: ";
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	delete[] arr;
	return 0;
};

// 평균
void average(int*& arr, int& n, float& Newaverage)
{
	arr = new int[n];
	float all = 0;

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "번째 학생 성적: ";
		cin >> arr[i];
		all += arr[i];
	}
	Newaverage = all / n;
}

// 정렬
void bubbleSort(int arr[], int n, bool ascending)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1]))
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}