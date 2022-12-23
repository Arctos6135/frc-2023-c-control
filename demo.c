#include"control.h"
#include<stdio.h>

target t;
directive d;

int main()
{
	t = malloc(sizeof(target));
	d = malloc(sizeof(directive));
	
	printf("Distance of target: ");
	scanf("%lf", &(t->d));
	printf("Height of target: ");
	scanf("%lf", &(t->h));

	aim(t, d);

	printf("Angle: %lf\nPower: %lf\n", d->a, d->p);

	return 0;
}
