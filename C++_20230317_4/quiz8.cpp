#include <iostream>
#include <string>
using namespace std;

int main()
{
	string question[] = { "개","고양이", "기린","코끼리", "표범" };
	string answer[] = { "dog","cat","giraffe","elephant","leopard" };
	string ox; //맞을 때마다 O, 틀릴 때마다 X 추가
	int score(0);

	cout << "영단어로 바꾸세요." << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << question[i]<<":";
		getline(cin, question[i]);
		if (question[i] == answer[i])
		{
			ox += "O";
			score += 20;
		}
		else
		{
			ox += "X";
		}
	}
	cout << "==> " << ox << " " << score << " 점입니다." << endl;

}