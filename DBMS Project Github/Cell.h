#pragma once
#include <string>
#include "Attribute.h"

using namespace std;
class Cell
{
	string name;
	Attribute attribute;
	
public:
	Cell(string name, Attribute attribute) :name(name), attribute(attribute) {}
	Attribute getAttribute() { return this->attribute; }
};

