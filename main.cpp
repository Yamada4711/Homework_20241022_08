#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int time = 0, second = 0, minutes = 0;
	
	cout << "秒数を入力してください > " << flush;
	cin >> time;

	second = time % 60;
	minutes = time / 60;

	cout << minutes << ':' << setfill('0') << setw(2) << second << "秒" << endl;
}