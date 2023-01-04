#include"control.h"
#include<math.h>

// prepares a projectile launch
char aim(tgt_ _t, dct_ _d)
{
	if (!_t->y)
		return memset(_d, 0, sizeof(_d)) ? 0 : -4;

	double th = atan((sqrt(4*_t->x*_t->x+_t->y)+_t->y)/2/_t->x);
	double mg = _t->x*_t->x/cos(th)/(2*_t->x*sin(th)-_t->y*cos(th));

	_d->ang = th;
	_d->pow = mg;

	printf("Angle: %lf\nPower: %lf\n", _d->ang, _d->pow);
}
