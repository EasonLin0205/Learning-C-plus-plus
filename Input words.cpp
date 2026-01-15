#include<iostream>
#include<string>
#include<cstring>

int main() {
	char* strArr[64] = { nullptr };
	int current = 0;
	char temp[64];
	std::cout << "Enter words (to stop, type the word done) : " << std::endl;
	while (std::cin >> temp) {
		if (strcmp(temp, "done") == 0) {
			break;
		}
		strArr[current] = new char[std::strlen(temp) + 1];
		strcpy(strArr[current], temp);
		current++;
	}
	std::cout << "You entered total of " << current << " words." << std::endl;
	std::cout << "There are your words : " << std::endl;
	for (char* p : strArr) {
		if (p == NULL) {
			break;
		}
		std::cout << p << "\t";
	}
}