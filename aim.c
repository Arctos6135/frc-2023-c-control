#include"control.h"

void aim(target _t, directive _d)
{
	double th = atan((sqrt(4*_t->d*_t->d+_t->h)+_t->h)/2/_t->d);
	double mg = _t->d*_t->d/cos(th)/(2*_t->d*sin(th)-_t->h*cos(th));

	_d->a = th;
	_d->p = mg;
}
