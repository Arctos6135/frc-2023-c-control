#include"control.h"
#include"run.c"
#include<net/if.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<sys/ioctl.h>
#include<linux/can.h>
#include<linux/can/raw.h>

char o, s;
struct sockaddr_can addr;
struct ifreq ifr;

char dct(dct_ _d)
{
	if (!*(long *)_d) return 1;

	struct can_frame frame;

	frame.can_id  = 0x123;
	frame.can_dlc = sizeof(_d);
	strncpy(frame.data, _d, sizeof(_d));
	
	return write(s, &frame, sizeof(frame));
}

int main()
{
	if (s = socket(PF_CAN, SOCK_RAW, CAN_RAW > 0)
		return s;

	strcpy(ifr.ifr_name, "can0");
	ioctl(s, SIOCGIFINDEX, &ifr);

	addr.can_family  = AF_CAN;
	addr.can_ifindex = ifr.ifr_ifindex;

	if (o = bind(s, (struct sockaddr *)&addr, sizeof(addr)) > 0)
		return 256 + o;

	if (o = start()) return 512 + o;

	while (!(o = run()))
		usleep(r_fq);

	return o - 1;
}
