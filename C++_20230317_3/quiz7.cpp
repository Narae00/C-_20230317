#include <iostream>
#include <string>
using namespace std;
int main() 
{

	char input[100];
	char input2[100];
	char name[100];
	char password[100];

	cout << "�̸� �Է�: ";
	cin.getline(name,100);
	cout << "��ȣ �Է�: ";
	cin.getline(input,100);
	cout << "�ٽ� �Է�: ";
	cin.getline(input2,100);

	if (strcmp(input ,input2)==0)

		cout << name << "�Բ��� �α��� �ϼ̽��ϴ�." << endl;
	else
		cout << name << "��, �ٽ� �Է��ϼ���." << endl;

	return 0;
	}