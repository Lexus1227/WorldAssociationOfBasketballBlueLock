#include "Player.h"

void Player::set_stat(characteristic st) {

	stat = st;

}
void Player::set_name(std::string n) {

	name = n;

}
void Player::set_number(std::string num) {

	number = num;

}


std::ostream& operator<<(std::ostream& os, Player p) {

	os << "Имя: " << p.name << std::endl;
	os << "Номер: " << p.number << std::endl;
	os << "Характеристики: \n" << p.stat;
	return os;

}


std::istream& operator>>(std::istream& is, Player& p) {

	std::string buf;
	std::getline(is, p.name);
	std::getline(is, p.number);
	is >> p.stat;
	return is;

}