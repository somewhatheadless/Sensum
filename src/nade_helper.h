#pragma once
#include <string>
#include "valve_sdk/csgostructs.hpp"
#include "esp.hpp"
#include "features/features.h"
#include "globals.h"

class GrenadeData
{
public:
	std::string info;
	Vector pos = Vector(0, 0, 0);
	Vector ang = Vector(0, 0, 0);
	float ring_height = 0.f;
};


