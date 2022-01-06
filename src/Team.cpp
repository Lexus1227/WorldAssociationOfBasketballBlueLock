#include "Team.h"


std::ostream& operator<<(std::ostream& os, Team t) {

	os << "Название: " << t.get_name() << std::endl;
	os << "Игроки: " << std::endl;
	std::cout << std::endl;
	for (auto p : t.players) {

		os << p << std::endl;
		os << std::endl;

	}
	return os;

}


// rofl
#define for_i(n) for (int index = 0; index < n; ++index)
std::istream& operator>>(std::istream& is, Team& t) {

	std::getline(is, t.name);
	t.players.resize(0);

	int nplayers = 0;
	std::string buf;
	std::getline(is, buf);
	nplayers = std::stoi(buf);

	t.players.resize(nplayers);
	for_i(nplayers) {

		is >> t.players[index];

	}

	return is;

}


std::vector<Team> load_teams(std::string path, std::string file) {

	std::filesystem::path dir(path);
	std::filesystem::path filename(file);
	std::filesystem::path full_path = dir / filename;

	std::ifstream is;

	is.open(full_path.c_str(), std::ios::in);

	int nteams = 0;
	std::string buf;
	std::getline(is, buf);
	nteams = std::stoi(buf);

	std::vector<std::string> team_names(nteams);
	std::vector<Team> teams(nteams);

	for_i(nteams) {

		std::getline(is, team_names[index]);

	}

	is.close();

	for_i(nteams) {

		full_path = dir / std::filesystem::path(team_names[index]);
		is.open(full_path.c_str(), std::ios::in);
		is >> teams[index];
		is.close();

	}

	return teams;

}