#include "Tokenizer.h"


vector<string> Tokenizer::Seperate(string stream, char del) {

	int size = stream.length();
	
	vector<string> separated;
	string token;

	for (char c : stream) {
		
		if (c == del) {
			
			separated.push_back(token);
			token = "";
		}
		else {
			token += c;

		}
	}
	separated.push_back(token); 
	//token = "";

	return separated;
}