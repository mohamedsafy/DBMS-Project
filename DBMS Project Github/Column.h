#pragma once
#include <string>
#include "Enum.h"
#include "Attribute.h"

using namespace std;
class Column
{
	string name;
	Attribute attribute;

public:
	Column(string name, Attribute attribute):name(name),attribute(attribute) {}
	Attribute getAttribute() { return this->attribute; }
};

