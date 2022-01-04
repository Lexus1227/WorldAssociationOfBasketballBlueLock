#pragma once

#include <map>
#include <vector>

#include "Team.h"


class League {

private:
	std::vector<Team> teams;

public:
	std::vector<Team> get_teams() { return teams; }

};

