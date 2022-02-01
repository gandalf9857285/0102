#include "Duck.h"

Duck::Duck() {

}
void Duck::swim() {
	cout << "plavanie" << endl;
}
void Duck::fly() {
	cout << "I'm flying!" << endl;
}
void Duck::performQuack() {
	quackBehavior->quack();
}