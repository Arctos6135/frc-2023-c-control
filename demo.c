#include"control.h"
#include"aim.c"
#include<stdio.h>

char r_fq = 250;

struct _d_ {
	double ang;
	double pow;
};

char init()
{
	struct _d_ l[31] = [
		{.2, .2}, {.2, .3}, {.2, .4}, {.2, .5}, {.2, .6}, {.2, .7},
		{.3, .2}, {.3, .3}, {.3, .4}, {.3, .5}, {.3, .6}, {.3, .7},
		{.4, .2}, {.4, .3}, {.4, .4}, {.4, .5}, {.4, .6}, {.4, .7},
		{.5, .2}, {.4, .3}, {.4, .4}, {.4, .5}, {.4, .6}, {.4, .7}
	];

	char o;
	for (dct_ i = l; *i; i++)
		if (o = dct(i))
			return o;


	return 0;
}

char rcv(com_ _c, tgt_ _t)
{
	dct_ d = malloc(sizeof(dct_));

	printf("Distance of tgt_: ");
	scanf("%lf", &(_t->x));
	printf("Height of tgt_: ");
	scanf("%lf", &(_t->y));

	_c->a = aim;
	_c->imp = 1;

	return 0;
}
