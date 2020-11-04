#pragma once
#include "Cat.h"
typedef struct Cat;

struct Man {
	long long id;
	Cat* kitty;
	int kittyCount;
};