#include "Fraction.h"
#include <iostream>
#include <cmath>

using namespace std;

Fraction::Fraction() {
	this->numerator = 0;
	this->denominator = 0;
}

Fraction::Fraction(int a, int b) {
	setNumer(a);
	setDenomin(b);
}

void Fraction::setNumer(int a) {
	this->numerator = a;
}

void Fraction::setDenomin(int b) {
	this->denominator = b;
}

bool Fraction::isSquareNum(int k) {
	return (pow(round(sqrt(k)), 2) == k) ? true : false;
}

bool Fraction::checkForCorrect() {
	if (isSquareNum(getNdy_N() - getNdy_M())
		&& (isSquareNum(getNdy_N() + getNdy_M())))
		return true;
	else return false;
}

int Fraction::getNdy_N() {
	return pow(this->numerator, 2);
}
int Fraction::getNdy_M() {
	return 5 * pow(this->denominator, 2);
}

int Fraction::GCD(int a, int b) {
	int r;
	while (b) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

void Fraction::downFraction() {
	int token = GCD(this->numerator, this->denominator);
	this->numerator /= token;
	this->denominator /= token;
}

int Fraction::getNumer() {
	return this->numerator;
}

int Fraction::getDenomin() {
	return this->denominator;
}

void Fraction::showFraction() {
	cout << Fraction::id++ << ". " << this->numerator 
		<< " / " << this->denominator << endl;
}

int Fraction::id = 1;