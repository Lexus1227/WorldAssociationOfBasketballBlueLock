#include "shuffle_test.h"


void test_shuffle() {

	std::vector v = { 1, 2 ,3, 4, 5, 6 };
	std::mt19937 g(43);
	std::vector<match_index> res = generate_flat(v);
	std::shuffle(res.begin(), res.end(), g);
	for (int i = 0; i < res.size(); ++i) {

		std::cout << res[i].first << " - " << res[i].second << std::endl;


	}

}