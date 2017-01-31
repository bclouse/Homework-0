#include <iostream>
#include <string>

using namespace std;

class Letter {
		char character;
	public:
		void setl (char);
		void printl();
};

void Letter::setl (char c) {
	character = c;
}

void Letter::printl() {
	cout << character;
}

class String {
		int length;
		Letter *letters;
	public:
		String (string);
		void prints();
};

String::String (string s) {			//Constructer function for a String								
	s += '\n';
	length = s.size();
	letters = new Letter [length];

	for (int i = 0; i < length; i++) {
		letters[i].setl(s.at(i));
	}
}

void String::prints() {
	for (int i = 0; i < length; i++) {
		letters[i].printl();
	}
}

int main() {
	string str = "Hello World!"; 	//creates the string to print
	String s (str);					//CONSTRUCTS a string with 'str' string
	s.prints();

	return 0;
}