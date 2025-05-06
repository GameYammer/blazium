
#include "things.h"
#include "core/object/script_language.h"

#include <cstdint>
#include <random>

Things::Things() {
	//print_line("Things created");
}

Things::~Things() {
	//print_line("Things destroyed");
}

uint64_t Things::get_random_number() {
	static std::random_device rd;
	static std::mt19937_64 gen(rd());
	static std::uniform_int_distribution<uint64_t> dis;
	return dis(gen);
}

void Things::_bind_methods() {
	ClassDB::bind_static_method("Things", D_METHOD("get_random_number"), &Things::get_random_number);
}
