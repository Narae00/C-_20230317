#include <iostream>
#include <string>
using namespace std;
int main() 
{

	char input[100];
	char input2[100];
	char name[100];
	char password[100];

	cout << "이름 입력: ";
	cin.getline(name,100);
	cout << "암호 입력: ";
	cin.getline(input,100);
	cout << "다시 입력: ";
	cin.getline(input2,100);

	if (strcmp(input ,input2)==0)

		cout << name << "님께서 로그인 하셨습니다." << endl;
	else
		cout << name << "님, 다시 입력하세요." << endl;

	return 0;
	}