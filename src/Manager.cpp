#include "Manager.h"

void Manager::run() {

	while (stack.size()) {

		Scene* current_scene = stack[stack.size() - 1];
		current_scene->content();
		std::string input;

		std::getline(std::cin, input);

		if (input == "b") {

			std::cout << std::endl;
			if (stack.size()) {

				delete current_scene;
				stack.pop_back();
				continue;

			} 
			else {

				break;

			}

		}
		else if (input == "q") {

			this->~Manager();
			exit_game();
			return;

		}
		Scene* new_scene = current_scene->options(input);

		if (new_scene != nullptr) {

			stack.push_back(new_scene);

		}

	}

}
