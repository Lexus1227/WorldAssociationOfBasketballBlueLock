#include "Manager.h"

void Manager::do_sth() {

	while (true) {

		current_scene->content();
		std::string input;

		std::getline(std::cin, input);

		Scene* new_scene = current_scene->options(input);

		if (new_scene != nullptr) {

			delete current_scene;
			current_scene = new_scene;

		}

	}

}
