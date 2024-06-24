#pragma once

class Counter {

	int number;
public:
	void setNumber(int number);
	void setCommand(std::string q);
	std::string getCommand();
	int getNumber();
	void change();
};