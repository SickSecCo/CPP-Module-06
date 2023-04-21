#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <stdint.h>

typedef struct {
	std::string nickname;
	std::string race;
	std::string classcharacter;
	std::string startingmap;
	double level;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif