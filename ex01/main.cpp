#include "Data.hpp"

int main() {
    Data input;

	input.nickname = "Secco";
	input.race = "Caucasico";
	input.classcharacter = "Gucci";
	input.startingmap = "Tuscolana";
	input.level= 1.5;

	std::cout << "Nickname: " << input.nickname << std::endl;
	std::cout << "Race of the character: " << input.race << std::endl;
	std::cout << "Class of the character: " << input.classcharacter << std::endl;
	std::cout << "Starting map of the character: " << input.startingmap << std::endl;
	std::cout << "Level of the character: " << input.level << std::endl;

	std::cout << "------------------------" << std::endl;

	uintptr_t output_uintptr = serialize(&input);

	Data* output = deserialize(output_uintptr);

	std::cout << "Nickname: " << output->nickname << std::endl;
	std::cout << "Race of the character: " << output->race << std::endl;
	std::cout << "Class of the character: " << output->classcharacter << std::endl;
	std::cout << "Starting map of the character: " << output->startingmap << std::endl;
	std::cout << "Level of the character: " << output->level << std::endl;
}