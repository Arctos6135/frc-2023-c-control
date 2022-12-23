#include<math.h>
#include<stdlib.h>

// a command before packaging to CAN
// specific to a motor or group of motors
typedef struct {
	double a;
	double p;
} *directive;

// parsed information from controller input
typedef struct {
	double d;
	double h;
} *target;

// prepares a projectile launch
void aim(target, directive);

// void direct(*directive);
