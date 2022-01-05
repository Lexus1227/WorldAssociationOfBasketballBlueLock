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

	os << "Имя игрока - " << p.name << std::endl;
	os << "Номер игрока - " << p.number << std::endl;
	os << "Статистика игрока \n" << p.stat;

}