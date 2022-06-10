#include <iostream>
#include "Tokenizer.h"
#include "Table.h"
#include "Row.h"
#include "Cell.h"
#include "Attribute.h"

using namespace std;

//Unit testing
#pragma region Tests
void TokenizerTest() {
	Tokenizer tokenizer;

	vector<string> results = tokenizer.Seperate("Mohamed,Ahmed,Mahmoud,Mostafa,", ',');
	for (string result : results) {
		cout << result << endl;
	}
}

void TestingTableCreation() {

	vector<Column> header = { *new Column("ID", *new Attribute(INT, 4)), *new Column("NAME", *new Attribute(VARCHAR, 20)), *new Column("AGE", *new Attribute(INT, 4)) };
	Table table(header);


}

void TestingRowInsertingToTable() {
	vector<Column> header = { *new Column("ID", *new Attribute(INT, 4)), *new Column("NAME", *new Attribute(VARCHAR, 20)), *new Column("AGE", *new Attribute(INT, 4)) };
	Table table(header);
	vector<Cell> data = { *new Cell("1", header[0].getAttribute()), *new Cell("Mohamed", header[1].getAttribute()), *new Cell("20", header[2].getAttribute()) };
	table.insert_row(*new Row(data));

}
#pragma endregion




int main() {

	TestingRowInsertingToTable();


	return 0;
}