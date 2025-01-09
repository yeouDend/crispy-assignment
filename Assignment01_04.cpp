#include <iostream>
#include <vector>
#include <string>

using namespace std; // namespace std ���

//å
class Book
{
public:
	string title; //å ����

	string author; //�۰�

	Book(const string& NewTitle, const string& NewAuthor)
		: title(NewTitle), author(NewAuthor)
	{
	}

	~Book()
	{
	}
};

//å ������
class BookManager
{
private:
	
	vector<Book> books;

public:
	// å �߰� �޼���
	void addBook(const string& title, const string& author)
	{
		//���� å ������ �������� �̹� ������ �߰� ���ҰŴ�.
		for (int i = 0; i < books.size(); i++)
		{
			if (books[i].title == title)
			{
				cout << "�̹� �߰��� å�� �ֽ��ϴ�. ���ư�����" << endl;
				return;
			}
		}

		books.push_back(Book(title, author)); // push_back ���
		cout << "å�� �߰��Ǿ����ϴ�: " << title << " by " << author << endl;
	}

	// ��� å ��� �޼���
	void displayAllBooks() const {
		if (books.empty()) {
			cout << "���� ��ϵ� å�� �����ϴ�." << endl;
			return;
		}

		cout << "���� ���� ���:" << endl;
		for (size_t i = 0; i < books.size(); i++) { // �Ϲ����� for�� ���
			cout << "- " << books[i].title << " by " << books[i].author << endl;
		}
	}

	void SearchByTitle(string FindTitle)
	{
		//���� FindTitle������ ����ִٸ�
		if (FindTitle.empty())
		{
			cout << "����� �Է����ּ���" << endl;
			return;
		}
		
		for (int i = 0; i < books.size(); i++)
		{
			if (books[i].title == FindTitle)
			{
				cout << FindTitle <<" �� ã�ҽ��ϴ�" << endl;
				return;
			}
		}
		cout << "å�� ��ã�ҽ��ϴ�" << endl;
	}

	void SearchByAuthor(string Author)
	{
		for (int i = 0; i < books.size(); i++)
		{
			if (books[i].author == Author)
			{
				cout << Author << " �� ã�ҽ��ϴ�" << endl;
				return;
			}
		}
		cout << "å�� ��ã�ҽ��ϴ�" << endl;
	}

	
	
};

int main() {
	BookManager manager;

	// ������ ���� ���α׷��� �⺻ �޴��� �ݺ������� ����Ͽ� ����� �Է��� ó���մϴ�.
	// ���α׷� ���Ḧ �����ϱ� ������ ��� �����մϴ�.
	while (true) {
		cout << "\n������ ���� ���α׷�" << endl;
		cout << "1. å �߰�" << endl; // å ������ �Է¹޾� å ��Ͽ� �߰�
		cout << "2. ��� å ���" << endl; // ���� å ��Ͽ� �ִ� ��� å ���
		cout << "3. ����" << endl; // ���α׷� ����
		cout << "����: ";

		int choice; // ������� �޴� ������ ����
		cin >> choice;

		if (choice == 1) {
			// 1�� ����: å �߰�
			// ����ڷκ��� å ����� ���ڸ��� �Է¹޾� BookManager�� �߰��մϴ�.
			string title, author;
			cout << "å ����: ";
			cin.ignore(); // ���� �Է��� �ܿ� ���۸� ����
			getline(cin, title); // ���� �Է� (���� ����)
			cout << "å ����: ";
			getline(cin, author); // ���ڸ� �Է� (���� ����)
			manager.addBook(title, author); // �Է¹��� å ������ �߰�
		}
		else if (choice == 2) {
			// 2�� ����: ��� å ���
			// ���� BookManager�� ����� å ����� ����մϴ�.
			manager.displayAllBooks();
		}
		else if (choice == 3) {
			// 3�� ����: ����
			// ���α׷��� �����ϰ� ����ڿ��� �޽����� ����մϴ�.
			cout << "���α׷��� �����մϴ�." << endl;
			break; // while ���� ����
		}
		else {
			// �߸��� �Է� ó��
			// �޴��� ���� ��ȣ�� �Է����� ��� ��� �޽����� ����մϴ�.
			cout << "�߸��� �Է��Դϴ�. �ٽ� �õ��ϼ���." << endl;
		}
	}

	return 0; // ���α׷� ���� ����
}
