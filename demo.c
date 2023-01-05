#include"demo.h"

char init()
{
	struct _d_ l[31];

	l[ 0] = (struct _d_){.2, .2};
	l[ 1] = (struct _d_){.2, .3};
	l[ 2] = (struct _d_){.2, .4};
	l[ 3] = (struct _d_){.2, .5};
	l[ 4] = (struct _d_){.2, .6};
	l[ 5] = (struct _d_){.2, .7};
	l[ 6] = (struct _d_){.3, .2};
	l[ 7] = (struct _d_){.3, .3};
	l[ 8] = (struct _d_){.3, .4};
	l[ 9] = (struct _d_){.3, .5};
	l[10] = (struct _d_){.3, .6};
	l[11] = (struct _d_){.3, .7};
	l[12] = (struct _d_){.4, .2};
	l[13] = (struct _d_){.4, .3};
	l[14] = (struct _d_){.4, .4};
	l[15] = (struct _d_){.4, .5};
	l[16] = (struct _d_){.4, .6};
	l[17] = (struct _d_){.4, .7};
	l[18] = (struct _d_){.5, .2};
	l[19] = (struct _d_){.5, .3};
	l[20] = (struct _d_){.5, .4};
	l[21] = (struct _d_){.5, .5};
	l[22] = (struct _d_){.5, .6};
	l[23] = (struct _d_){.5, .7};
	l[24] = (struct _d_){.6, .2};
	l[25] = (struct _d_){.6, .3};
	l[26] = (struct _d_){.6, .4};
	l[27] = (struct _d_){.6, .5};
	l[28] = (struct _d_){.6, .6};
	l[29] = (struct _d_){.6, .7};
	l[30] = (struct _d_){.0, .0};

	char o;
	for (dct_ i = l; i++->pow; usleep(500000))
		if (o = dct(i))
			return o;

	return o;
}

char rcv(com_ _c, tgt_ _t)
{
	dct_ d = malloc(sizeof(dct_));

	printf("Distance of tgt_: ");
	scanf("%lf", &(_t->x));
	printf("Height of tgt_: ");
	scanf("%lf", &(_t->y));

	_c->a = aim;
	_c->imp = _t->y ? 1 : 0;

	return 0;
}
