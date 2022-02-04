#include "DecoyDuck.h"

DecoyDuck::DecoyDuck() {
	quackBehavior = new Quack();
};
void DecoyDuck::display() {
	cout << "Decoy for Duck" << endl;	
};