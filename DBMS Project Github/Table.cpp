#include "Table.h"


void Table::insert_row(Row row) {

	vector < Cell > data = row.getData();

	//check if row matches the header
	if (row.getData().size() != header.size()) {
		//Throw exception
		cout << "Temporary exception 1" << endl;
	
	}
	else {
		for (int i = 0; i < row.getData().size(); i++) {
			
			if (data[i].getAttribute() != header[i].getAttribute()) {
			
				//Throw exception
				cout << "Temporary exception 2"<<endl;
				
			}
		
		}
	
	}
	
	//add it
	rows.push_back(row);

}