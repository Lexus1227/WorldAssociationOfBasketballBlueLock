#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <set>

// выход из игры
void exit_game();

// является ли строка числом
bool is_number(const std::string& s);

// сплит строки по делиметерам
std::vector<std::string> split(std::string s, std::set<char> delimeters);


class ParseException : public std::exception {
private:
	std::string message;
public:
	ParseException(std::string msg) : message(msg) {};
	const char* what() { return this->message.c_str(); }

};