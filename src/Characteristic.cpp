	#include "Characteristic.h"


std::ostream& operator<<(std::ostream& os, characteristic stat) {

	os << std::setprecision(3);
	os << "AGI = " << stat.agility << " | ";
	os << "ACC = " << stat.acuraccy << " | ";
	os << "STR = " << stat.strength << " | ";
	os << "END = " << stat.endurance << " | ";
	os << "ATK = " << stat.attack << " | ";
	os << "DEF = " << stat.agility << " | ";
	os << std::setprecision(6);
	return os;

}


std::istream& operator>>(std::istream& is, characteristic& stat) {

	std::string buf;
	std::getline(is, buf);
	auto c = split(buf, { ';' });
	for (auto value : c) {

		auto pairs = split(value, { '=' });
		if (pairs.size() != 2) 
			throw ParseException("Ошибка во время парсинга характеристик, не могу разделить поле по символу =");
		
		stat_type val;
		try {

			val = std::stoi(pairs[1]);

		}
		catch (...) {

			throw ParseException("Значение после символа = не соответствует вещественному значению");

		}
		stat.set_value(trim(pairs[0]), val);

	}

}
