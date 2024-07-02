#pragma once

class Counter {

	int number;
	std::string command;
public:
	void setNumber(int number);
	void setCommand(std::string q);
	std::string getCommand();
	int getNumber();
	void change();
};