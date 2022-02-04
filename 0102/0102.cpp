#include <iostream>
#include"Duck.h"
#include"RedheadDuck.h"
#include"MallardDuck.h"
#include"RubberDuck.h"
#include"DecoyDuck.h"
int main()
{
	Duck* d1 = new RedheadDuck();
	d1->display();
	d1->performQuack();
	d1->swim();
	d1->fly();
	std::cout << std::endl;

	Duck* d2 = new MallardDuck();
	d2->display();
	d2->performQuack();
	d2->swim();
	d2->fly();
	std::cout << std::endl;

	Duck* d3 = new RubberDuck();
	d3->display();
	d3->performQuack();
	d3->swim();
	d3->fly();
	std::cout << std::endl;

	Duck* d4 = new DecoyDuck();
	d4->display();
	d4->performQuack();
	d4->swim();
	d4->fly();
	std::cout << std::endl;

	return 0;
}
