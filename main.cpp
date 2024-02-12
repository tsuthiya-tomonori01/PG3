#include <Windows.h>
#include <stdio.h>

#include <algorithm>
#include <cassert>
#include <fstream>
#include <iostream>
#include <list>
#include <sstream>

struct StudentAccount {
	std::string name;
	std::string gradeNumber;
	std::string attendanceNumber;
};

int main() {

	SetConsoleOutputCP(65001);

	std::list<StudentAccount> studentAccounts;

	// �ǂݍ��ރt�@�C�����J��
	std::ifstream inputFile("05_02.txt");
	assert(inputFile.is_open());

	// �s���Ƃɓǂݍ���
	std::string line;
	while (getline(inputFile, line)) {

		std::istringstream lineStream(line);
		std::string account;

		while (getline(lineStream, account, ',')) {

			StudentAccount studentAccount{};
			studentAccount.name = account;

			std::string gradeNumber = account.substr(2, 3);
			std::string attendanceNumber = account.substr(6, 4);

			studentAccount.gradeNumber = gradeNumber.c_str();
			studentAccount.attendanceNumber = attendanceNumber.c_str();
			studentAccounts.emplace_back(studentAccount);
		}
	}

	// �t�@�C�������
	inputFile.close();

	studentAccounts.sort([](const StudentAccount& a, const StudentAccount& b) {
		return std::atoi((a.gradeNumber + a.attendanceNumber).c_str()) <
		       std::atoi((b.gradeNumber + b.attendanceNumber).c_str());
	});

	for (auto& accountName : studentAccounts) {

		std::cout << accountName.name << std::endl;
	}
	return 0;
}