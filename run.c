#include"control.h"
#define C_LN 15

char o;
com_ c;
tgt_ t;
dct_ d;

char start()
{
	c = malloc(sizeof(com_)*(C_LN+1));
	t = malloc(sizeof(tgt_));
	d = malloc(sizeof(dct_));

	return init();
}

char run()
{
	com_ j = c;
	while (++j->imp)
		if (j == c + C_LN)
			return 4;

	if (o = rcv(j, t))
		return o;

	for (com_ i = c; i < c + C_LN; i++)
		if (i->imp > j->imp)
			j = i;

	return (o = j->a(t, d)) ? (c->imp = o - 1) : dct(d);
}
