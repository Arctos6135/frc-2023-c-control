#include"control.h"
#include<stdio.h>
#include<net/if.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<sys/ioctl.h>
#include<linux/can.h>
#include<linux/can/raw.h>

const char *ifname = "vcan0";

uint8_t o, s;
struct sockaddr_can addr;
struct ifreq ifr;

uint8_t wt(dct_ _d)
{
	printf("Angle: %lf\nPower: %lf\n", _d->ang, _d->pow);

	struct can_frame frame;

	frame.can_id  = 0x123;
	frame.can_dlc = 1;
	frame.data[0] = d->ang;
	frame.data[1] = d->pow;

	o = write(s, &frame, sizeof(frame));

	return o & 128 ? o : 0;
}

uint8_t rcv(com_ _c, tgt_ _t)
{
	tgt_ t = malloc(sizeof(tgt_));
	dct_ d = malloc(sizeof(dct_));

	printf("Distance of tgt_: ");
	scanf("%lf", &(t->x));
	printf("Height of tgt_: ");
	scanf("%lf", &(t->y));

	aim(t, d);

	_c->a = &wt;
	_c->imp = 1;

	return 0;
}

int main()
{
	if ((s = socket(PF_CAN, SOCK_RAW, CAN_RAW) & 128)
		return s;

	strcpy(ifr.ifr_name, "can0");
	ioctl(s, SIOCGIFINDEX, &ifr);

	addr.can_family  = AF_CAN;
	addr.can_ifindex = ifr.ifr_ifindex;

	if ((o = bind(s, (struct sockaddr *)&addr, sizeof(addr))) & 128)
		return 256 + o;

	if (o = start()) return 512 + o;

	while (!(o = run()))
		usleep(250);

	return o - 1;
}
