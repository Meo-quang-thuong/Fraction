#pragma once

class Fraction {
private:
	int numerator, denominator;
	static int id;

public:
	Fraction();
	Fraction(int, int);

	void setNumer(int);
	void setDenomin(int);

	bool isSquareNum(int);

	bool checkForCorrect();

	int getNdy_N();
	int getNdy_M();

	int GCD(int, int);
	void downFraction();

	int getNumer();
	int getDenomin();

	void showFraction();
};

