#include "RubberDuck.h"

RubberDuck::RubberDuck() {
	quackBehavior = new Quack();
};
void RubberDuck::display() {
	cout << "I'm a not real, Rubber Duck!" << endl;
};