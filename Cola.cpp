#include "Cola.h"
#define Angulo 30

void Cola::DibujarCola(int n, float x, float y, float z) {


	glPushMatrix();
	glTranslatef(x, y, z);

	glTranslatef(-1.0, 0.0, 0.0);
	glRotatef((GLfloat)Angulo, 1.0, 0.0, 0.0);
	glTranslatef(1.0, 0.0, 0.0);
	glPushMatrix();
	glScalef(2.0, 0.4, 1.0);
	//glutSolidCylinder(1.0,2.0,3,6);
	glPopMatrix();

	for (int j = 0; j < n / 2; j++) { 
		for (int i = 0; i < n; i++)
		{
			glTranslatef(-1.0, 0.0, 0.0);
			glRotatef((GLfloat)Angulo, 1.0, 2.0, 0.0);
			glTranslatef(2.0, 0.0, 0.0);
			glPushMatrix();
			glScalef(1.0, 0.4, 1.0);
			glutSolidCylinder(1.0, 2.0, 3, 6);
			//glutSolidCube(1.0);
			glPopMatrix();
		}
	}

	glPopMatrix();
}
