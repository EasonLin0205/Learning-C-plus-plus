// 根据输入的小时数和分钟数 输出时间
// 例如输入 9 和 28 ，输出 Time : 9:28

#include<iostream>
#include<string>

using namespace std;

string ftime(int h, int m);


int main() {
	int hour, minute;
	cout << "Enter the number of hours : ";
	cin >> hour;
	cout << "Enter the number of minutes : ";
	cin >> minute;
	cout << "Time : " << ftime(hour, minute) << endl;
}

string ftime(int h, int m) {
	return to_string(h) + ":" + to_string(m);
}