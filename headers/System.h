#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <set>

// константы
const int max_width_word = 5;
const std::string fill_symbol = " ";
const std::string delimeter = fill_symbol + "vs" + fill_symbol;
const int full_len = max_width_word * 2 + delimeter.size();
const int days_in_row = 5;
const std::string day_name = "День" + fill_symbol;


// выход из игры
void exit_game();

// является ли строка числом
bool is_number(const std::string& s);

// сплит строки по делиметерам
std::vector<std::string> split(std::string s, std::set<char> delimeters);


// Отрезать от строки слева и справа пробельные символы
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


class WrongParamValue : public std::exception {
private:
	std::string message;
public:
	WrongParamValue(std::string msg) : message(msg) {};
	const char* what() { return this->message.c_str(); }

};