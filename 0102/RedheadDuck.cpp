#include "RedheadDuck.h"

RedheadDuck::RedheadDuck() {
	quackBehavior = new Quack();
}
void RedheadDuck::display() {
	cout << "I'm a real Redhead Duck!" << endl;
}