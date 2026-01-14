#include<iostream>
#include<random>

using namespace std;


int main() {
	random_device rd;  // 提供一个不可预测的随机数种子
	mt19937 gen(rd());   // 初始化种子
	uniform_int_distribution<> dist(1, 100);    // 生成 [1,100] 的随机数
	int rand_num = dist(gen);    // gen 生成随机数，dist 把结果映射到取值范围内
	int result;
	int min = 1;
	int max = 100;
	cout << "Let's guess (" << min << "," << max << ") : ";
	cin >> result;
	while (rand_num != result) {
		if (result < rand_num) {
			cout << "Too small" << endl;
			min = result;   // 调整下限
		}
		else {
			cout << "Too big" << endl;
			max = result;   // 调整上限
		}
		cout << "Let's guess (" << min << "," << max << ") : ";
		cin >> result;
	}
	cout << "Bingo! The number is " << rand_num << " !" << endl;
}