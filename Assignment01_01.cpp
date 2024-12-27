#include <iostream>

using namespace std;

//��ǥ : 5���� ���ڸ� �Է� �޾� �迭�� �����ϰ� �հ�� ��� ��� �� ����� ��

//�Լ� ����
double Total(double sexual[], int size);
double Average(double total, int size);

//���� ���� ���, 
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
	//�迭 ũ�� ����
	const int size = 5;
	double scores[size];

	//�迭�� �Է�
	cout << "5���� ������ �Է��� �ּ���: ";
	for (int i = 0; i < size; i++)
	{
		cin >> scores[i];
	}

	//�Լ� ȣ��
	double total = Total(scores, size);
	double average = Average(total, size);

	int choice;
	cout << "���� ������ �����ϼ��� (1�� ��������, 2�� ��������): ";
	cin >> choice;

	bool ascending = (choice == 1);

	bubbleSort(scores, size, ascending);

	cout << "���ĵ� �迭: ";
	for (int i = 0; i < size; ++i)
	{
		cout << scores[i] << " ";
	}
	cout << endl;

	// ���
	cout << "5���� ������ ��: " << total << endl;
	cout << "5���� ������ ���: " << average << endl;

	return 0;
}

// �Լ� ����
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