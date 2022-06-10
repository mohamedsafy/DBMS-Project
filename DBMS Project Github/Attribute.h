#pragma once
#include "Enum.h"

using namespace std;
class Attribute
{
	Type type;
	int size;

public:
	Attribute(Type type, int size) :type(type), size(type) {}

	bool operator == (Attribute attribute);

};

