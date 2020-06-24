#pragma once
#include "Player.h"
//#include "Property.h"

struct Offer
{
	Player* seller;
	Player* buyer;
	//Property* property;
	unsigned price;
	unsigned status = 0;
	//status goes 0 - pending for review, 1 - accepted, 2 - declined
	//it may require player to be out of jail for review - why 3 state system
};

