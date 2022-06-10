#pragma once
#include "Cell.h"
#include <vector>

using namespace std;
class Row
{
	vector<Cell> data;

public:
	Row(vector<Cell> data) :data(data) {}
	vector<Cell> getData() { return data; }

};

