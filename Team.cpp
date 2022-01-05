#include "Team.h"


std::ostream& operator<<(std::ostream& os, Team t) {

	os << "Имя команды - " << t.get_name();
	return os;

}