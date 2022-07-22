#include <iostream>
#include "Fraction.h"

void showResult(Fraction* pnt, int n)
{
	for (int i = 0; i < n; i++)
		pnt[i].showFraction();
}

int main()
{
	Fraction* Res = new Fraction[10];
	int length = 0;

	for (int i = 1; i < 1000 ; i++)
	{
		for (int j = 9; j < 1000; j++) {
			Fraction temp(j * 3 + 1 + (j % 2), i * 12);
			if (temp.checkForCorrect()) {
				temp.downFraction();
				bool check = true;
				for (int q = 0; q < length; q++)
					if (temp.getNumer() == Res[q].getNumer()
						&& temp.getDenomin() == Res[q].getDenomin()) {
						check = false;
						break;
					}
				if (check) Res[length++] = temp;
			}
		}
	}

	showResult(Res, length);

	return 0;
}


