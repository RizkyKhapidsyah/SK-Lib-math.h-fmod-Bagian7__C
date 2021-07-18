
#include <math.h>
#include <stdio.h>
#include <conio.h>

/*	Source by Microsoft
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main(void) {
	double w = -10.0, x = 3.0, z;

	z = fmod(w, x);
	printf("The remainder of %.2f / %.2f is %f\n", w, x, z);

	_getch();
	return 0;
}