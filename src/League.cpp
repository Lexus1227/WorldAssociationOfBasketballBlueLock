#include "League.h"

std::ostream& operator<<(std::ostream& os, std::map<std::string, win_lose_rating> stat) {

	for (auto a : stat) {

		os << std::setw(20) << std::setfill(fill_symbol[0]) << std::right << a.first << "" << " : " << a.second.win << " - " << a.second.lose << std::endl;

	}

	return os;

}
