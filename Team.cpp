#include "Team.h"


std::ostream& operator<<(std::ostream& os, Team t) {

	os << "��� ������� - " << t.get_name();
	return os;

}