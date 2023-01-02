#include"control.h"
#include<stdio.h>

uint8_t auton()
{
	return 0;
}

uint8_t wt(dct_ _d)
{
	printf("Angle: %lf\nPower: %lf\n", _d->ang, _d->pow);

	return o & 128 ? o : 0;
}

uint8_t rcv(com_ _c, tgt_ _t)
{
	dct_ d = malloc(sizeof(dct_));

	printf("Distance of tgt_: ");
	scanf("%lf", &(_t->x));
	printf("Height of tgt_: ");
	scanf("%lf", &(_t->y));

	_c->a = &wt;
	_c->imp = 1;

	return 0;
}
