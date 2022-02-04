#include "MallardDuck.h"

MallardDuck::MallardDuck() {
	quackBehavior = new Quack();
};
void MallardDuck::display() {
	cout << "I'm a real Mallard Duck!" << endl;
};