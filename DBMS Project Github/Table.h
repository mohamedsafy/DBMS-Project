#pragma once
#include "Column.h"
#include "Row.h"
#include <vector>
#include <iostream>

using namespace std;
class Table
{
	vector<Column> header;
	vector<Row> rows;

public:

	Table(vector<Column> header):header(header) {}
	void insert_row(Row row);
};

