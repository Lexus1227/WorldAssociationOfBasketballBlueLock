#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <set>

// ����� �� ����
void exit_game();

// �������� �� ������ ������
bool is_number(const std::string& s);

// ����� ������ �� �����������
std::vector<std::string> split(std::string s, std::set<char> delimeters);


// �������� �� ������ ����� � ������ ���������� �������
const std::string WHITESPACE = " ";
std::string ltrim(const std::string& s);
std::string rtrim(const std::string& s);
std::string trim(const std::string& s);


class ParseException : public std::exception {
private:
	std::string message;
public:
	ParseException(std::string msg) : message(msg) {};
	const char* what() { return this->message.c_str(); }

};


class UndefinedStat : public std::exception {
private:
	std::string message;
public:
	UndefinedStat(std::string msg) : message(msg) {};
	const char* what() { return this->message.c_str(); }

};