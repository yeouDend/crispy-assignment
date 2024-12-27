#include <iostream>

using namespace std;

//목표 : 5개의 숫자를 입력 받아 배열에 저장하고 합계와 평균 계산 및 출력할 것

//함수 선언
double Total(double sexual[], int size);
double Average(double total, int size);

//버블 정렬 사용, 
void bubbleSort(double scores[], int size, bool ascending)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if ((ascending && scores[j] > scores[j + 1]) || (!ascending && scores[j] < scores[j + 1]))
			{
				swap(scores[j], scores[j + 1]);
			}
		}
	}
}

int main()
{
	//배열 크기 설정
	const int size = 5;
	double scores[size];

	//배열에 입력
	cout << "5명의 성적을 입력해 주세요: ";
	for (int i = 0; i < size; i++)
	{
		cin >> scores[i];
	}

	//함수 호출
	double total = Total(scores, size);
	double average = Average(total, size);

	int choice;
	cout << "정렬 방향을 선택하세요 (1번 오름차순, 2번 내림차순): ";
	cin >> choice;

	bool ascending = (choice == 1);

	bubbleSort(scores, size, ascending);

	cout << "정렬된 배열: ";
	for (int i = 0; i < size; ++i)
	{
		cout << scores[i] << " ";
	}
	cout << endl;

	// 출력
	cout << "5명의 성적의 합: " << total << endl;
	cout << "5명의 성적의 평균: " << average << endl;

	return 0;
}

// 함수 정의
double Total(double scores[], int size)
{
	double sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += scores[i];
	}
	return sum;
}

double Average(double total, int size)
{
	return total / size;
}