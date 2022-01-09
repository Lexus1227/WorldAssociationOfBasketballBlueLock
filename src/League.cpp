#include "League.h"

std::ostream& operator<<(std::ostream& os, std::map<std::string, win_lose_rating> stat) {

	for (auto a : stat) {

		os << a.first << " : " << a.second.win << " - " << a.second.lose << std::endl;

	}

}
