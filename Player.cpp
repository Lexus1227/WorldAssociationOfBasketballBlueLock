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

	os << "��� ������ - " << p.name << std::endl;
	os << "����� ������ - " << p.number << std::endl;
	os << "���������� ������ \n" << p.stat;

}