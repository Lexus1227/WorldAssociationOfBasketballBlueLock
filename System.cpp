#include "System.h"

void exit_game() {

	exit(EXIT_SUCCESS);

}


bool is_number(const std::string& s) {

    return !s.empty() && std::find_if(s.begin(),
        s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();

}