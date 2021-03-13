#include "main.h"

Motor test(20);

void initialize() {

}

void read_auto() {
	std::ifstream myFile;
	myFile.open("/usd/Hello World.txt");

	int number_of_entries = 0;

	myFile >> number_of_entries;
	std::cout << "there are " << number_of_entries << " entries\n ";
	int entries[50];

	for (int i = 0; i < number_of_entries; i++) {
		myFile >> entries[i];
		std::cout << entries[i] << " ";
	}
	std::cout << std::endl;
	myFile.close();
}

void read_auto_2() {
	std::ifstream myFile;
	myFile.open("/usd/Hello World.txt");

	int number_of_entries = 0;

	myFile >> number_of_entries;
	std::cout << "there are " << number_of_entries << " entries\n ";
	int commands[50];
	int time[50];

	for (int i = 0; i < number_of_entries; i++) {
		myFile >> commands[i];
		myFile >> time[i];

		if (commands[i] == 1) {
			test = 127;
			delay(time[i]);
		}
		else if (commands[i] == 2) {
			test = -127;
			delay(time[i]);
		}
		else {
			test = 0;
			delay(time[i]);
		}
	}
	std::cout << std::endl;
	myFile.close();
}

void disabled() {}


void competition_initialize() {}


void autonomous() {}


void opcontrol() {
	read_auto_2();
	while (true) {

		pros::delay(20);
	}
}
