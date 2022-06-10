#include "Attribute.h"


bool Attribute::operator==(Attribute attribute) {
	if (this->type == attribute.type && this->size <= attribute.size)
		return true;
	else
		return false;


}