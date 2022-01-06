#include "System.h"

void exit_game() {

	exit(EXIT_SUCCESS);

}


bool is_number(const std::string& s) {

    return !s.empty() && std::find_if(s.begin(),
        s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();

}


std::vector<std::string> split(std::string s, std::set<char> delimeters) {

	std::vector<std::string> container;
	std::string cur = "";
	int i = 0;
	while (i < s.size()) {

		if (delimeters.find(s[i]) != delimeters.end()) {

			if (cur.size()) {

				container.push_back(cur);

			}
			cur = "";

		}
		else {

			cur += s[i];

		}
		++i;

	}
	if (cur.size()) {

		container.push_back(cur);

	}
	return container;

}


std::string ltrim(const std::string& s) {

	size_t start = s.find_first_not_of(WHITESPACE);
	return (start == std::string::npos) ? "" : s.substr(start);

}

std::string rtrim(const std::string& s){

	size_t end = s.find_last_not_of(WHITESPACE);
	return (end == std::string::npos) ? "" : s.substr(0, end + 1);

}

std::string trim(const std::string& s) {
	return rtrim(ltrim(s));
}
