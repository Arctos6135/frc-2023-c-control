#include<math.h>
#include<stdlib.h>
#include<unistd.h>

#include"run.c"

#ifndef R_FQ
#define R_FQ 250
#endif

// a repeated action
typedef uint8_t(*act_)(dct_);

// a motor command before packaging for CAN
typedef struct {
	double ang;
	double pow;
} *dct_;

// parsed information from controller input
typedef struct {
	double x;
	double y;
} *tgt_;

// a motor command
typedef struct {
	act_ a;
	uint8_t imp;
} *com_;

// directs the robot
uint8_t dct(dct_);

// set up robot, autonomously
uint8_t start();

// runs the robot, using user-provided rcv.
uint8_t run();

// execute at end of start
extern uint8_t auton();

// prepares a projectile launch
extern uint8_t aim(tgt_, dct_);

// receive input
extern uint8_t rcv(com_, tgt_);
