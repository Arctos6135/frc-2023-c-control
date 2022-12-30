#include"control.h"
#define C_LN 15

uint8_t o;
com_ c, e;
tgt_ t;
dct_ d;

uint8_t start()
{
	o = 0;
	c = (e = malloc(sizeof(com_)*(C_LN+1))) - C_LN;
	t = malloc(sizeof(tgt_));
	d = malloc(sizeof(dct_));

	return o;
}

uint8_t run()
{
	o = 0;

	while ((++c)->imp) if (d==e) return 1;

	if (o = rcv(c, t))
		return o;

	for (com_ i = e - C_LN; i < e; i++)
		if (i->imp < c->imp)
			c = i;

	if (o =   c->a(d)) return o;
	if (o = aim(t, d)) return o;
	if (o =    dct(d)) return o;

	return o;
}
