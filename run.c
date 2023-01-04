#include"control.h"
#define C_LN 15

char o;
com_ c, e;
tgt_ t;
dct_ d;

char start()
{
	c = (e = malloc(sizeof(com_)*(C_LN+1))) - C_LN;
	t = malloc(sizeof(tgt_));
	d = malloc(sizeof(dct_));

	return init();
}

char run()
{
	while ((++c)->imp)
		if (d==e)
			return 1;

	if (o = rcv(c, t))
		return o;

	for (com_ i = e - C_LN; i < e; i++)
		if (i->imp < c->imp)
			c = i;

	return (o = c->a(t, d)) ? (c->imp = o - 1) : dct(d);
}
