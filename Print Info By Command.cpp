#include<iostream>
#include<string>
#include<cctype>

#define strsize 100

enum Preference {
	fullname = 0,
	title,
	bopname
};

struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};

int main() {
	bop bops[] = {
		{"Wimp Macho","wm","??",0},
		{"Raki Rhodes","rr","Junior Programmer",2},
		{"Celia Laiter","MIPS","cl",1},
		{"Hoppy Hipman","hh","Analyst Trainee",2},
		{"Pat Hand","LOOPY","ph",1}
	};
	std::cout << "Benevolent Order of Programmers Report" << std::endl;
	std::cout << "a. display by name \t b. display by title" << std::endl;
	std::cout << "c. display by bopname \t d. display by preference" << std::endl;
	std::cout << "q. quit" << std::endl;
	std::cout << "Enter your choice : ";
	char command;
	while (std::cin >> command) {
		switch (command) {
		case 'a':
			for (const bop& b : bops) {
				std::cout << b.fullname << std::endl;
			}
			std::cout << "Next choice : ";
			break;
		case 'b':
			for (const bop& b : bops) {
				std::cout << b.title << std::endl;
			}
			std::cout << "Next choice : ";
			break;
		case 'c':
			for (const bop& b : bops) {
				std::cout << b.bopname << std::endl;
			}
			std::cout << "Next choice : ";
			break;
		case 'd':
			for (const bop& b : bops) {
				if (b.preference == fullname) {
					std::cout << b.fullname ;
				}
				else if (b.preference == title) {
					std::cout << b.title ;
				}
				else if (b.preference == bopname) {
					std::cout << b.bopname ;
				}
				std::cout << std::endl;
			}
			std::cout << "Next choice : ";
			break;
		case 'q':
			std::cout << "Bye!" << std::endl;
			return 0;
		default:
			std::cin.clear();
			std::cin.ignore(1000,'\n');
			std::cout << "Please enter a/b/c/d : ";
		}
	}
}