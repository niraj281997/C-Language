#include <stdio.h>

void main()
{
	float BS;
	printf("\n Enter Basic Salary : ");
	scanf("%f", &BS);
        float HRA, DA, PF;
	double Gross, Net;
	HRA = (0.2 * BS);
	DA = (0.4 * BS);
	Gross = BS + HRA + DA;
	PF = (0.1 * Gross);
	Net = Gross - PF;
	printf("\n HRA : %f \n DA : %f \n PF : %f ",HRA, DA, PF);
	printf("\n\n Gross Salary : %f \n  Net Salary : %f", Gross, Net);
}
      	      
