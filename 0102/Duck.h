#pragma once
#include<iostream>
#include"QuackBehavior.h"
#include"Quack.h"
using namespace std;

class Duck {
protected:
	QuackBehavior* quackBehavior;
public:
	Duck();
	void swim();
	void fly();
	void performQuack();
	virtual void display() = 0;
};
