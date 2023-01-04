#include<stdlib.h>
#include<unistd.h>
#include<string.h>

struct _d_;
struct _t_;

// a repeated action
typedef char (*act_)(tgt_, dct_);

// a motor command before packaging for CAN
typedef struct _d_ *dct_;

// parsed information from controller input
typedef struct _t_ *tgt_;
// a motor command
typedef struct {
	act_ a;
	char imp;
} *com_;

// directs the robot
char dct(dct_);

// set up robot, autonomously
char start();

// runs the robot, using user-provided rcv.
char run();

// frequency to call rcv
extern const char r_fq;

// execute at end of start
extern char init();

// receive input
extern char rcv(com_, tgt_);
