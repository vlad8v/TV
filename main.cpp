//Avtor: Kalinka Vlad
//
//Class TVset
//Moddeliruyu televizor
#include "tvset.h"
#include<iostream>
using namespace std;
TVSet::TVSet() { isOn = false; }
void TVSet::turnOn() { isOn = true; }
void TVSet::turnOff() { isOn = false; }
void TVSet::showStatus() {
	if (isOn)std::cout << "TV is on\n";
	else
}
