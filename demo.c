#include"control.h"
#include<stdio.h>

tgt_ t;
dct_ d;

int main()
{
	t = malloc(sizeof(tgt_));
	d = malloc(sizeof(dct_));

	printf("Distance of tgt_: ");
	scanf("%lf", &(t->x));
	printf("Height of tgt_: ");
	scanf("%lf", &(t->y));

	aim(t, d);

	printf("Angle: %lf\nPower: %lf\n", d->ang, d->pow);

	return 0;
}
