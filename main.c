#include"control.h"
#include<net/if.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<sys/ioctl.h>
#include<linux/can.h>
#include<linux/can/raw.h>

uint8_t o, s;
struct sockaddr_can addr;
struct ifreq ifr;

uint8_t dct(dct_ _d)
{
	struct can_frame frame;

	frame.can_id  = 0x123;
	frame.can_dlc = 1;
	frame.data[0] = _d->ang;
	frame.data[1] = _d->pow;

	o = write(s, &frame, sizeof(frame));
	
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
		usleep(R_FQ);

	return o - 1;
}
