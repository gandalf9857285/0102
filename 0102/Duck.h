#pragma once
#include<iostream>
#include"QuackBehavior.h"
#include"Quack.h"
#include"FlyBehavior.h"

using namespace std;

class Duck {
protected:
	QuackBehavior* quackBehavior;
	FlyBehavior* flyBehavior;
public:
	Duck();
	void swim();
	void fly();
	void performQuack();
	void performFly();
	
	virtual void display() = 0;
};
