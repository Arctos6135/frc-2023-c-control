# OVERVIEW

The following are provided,
in the hope that they may benefit those making the reformation to **C**.

- The basic mathematics behind a projectile launch mechanism,
	presuming said mechanism is compliant with the following:

	- **Work  must be proportional to power.**
	- **Angle must be proportional to power.**

- A boilerplate for tasks a robot must complete once, and multiple times.
- A straightforward methor for receiving and executing tasks for the robot.
- A demonstration of a full implementation of the above,
	for 35473D microprocessor architecture,
	using a controller area network compatible motor system.
- A circuit diagram for said implementation:

	![demo](./demo.png)

## USEAGE

A file, like `demo.c` and `aim.c` herein,
should be written and linked.
To do this is simple:

```sh
gcc main.c -o main.o
gcc demo.c -o demo.o
gcc main.o demo.o
```

## EXTERNAL FUNCTIONS

This library expects two external functions to be provided: `rcv` and `init`.
`init` is run once, at the end of `setup`.
`rcv` is run every `r_fq` milliseconds, a constant which must be provided,
and should assign a command to the robot.
If this command assigns a power of 0, the program will terminate with `0`.
Any nonzero exit codes from either of these functions,
will cause the termination with said code.

## OPERATION

`start` creates the connection with the robot,
and returns the result of `init` provided.

`run` is repeatedly executed every `R_FQ` microseconds,
and will execute the command with highest importance,
and on success, direct the robot to the target.

Commands are received using the `rcv` command,
as are targets.

The provided `main` function sets up a socket connection
with the *Linux* `socketcan` library.
Those not using *Linux* should [install it now](https://www.linux.org/pages/download/).

## STRUCTURE

- A directive is a series of bytes to be transmitted.
	In the provided demonstration,
	these are the power level for two motors:
	both 8 byte floating point numbers.
	A target is a series of bytes which are received.
	In the provided demonstration,
	these are the distance and height of a goal:
	both 8 byte floating point numbers.
- That `sizeof(dct_) == sizeof(tgt_)` is entirely coincidental.
- An action is a function pointer, taking the current target,
	and the current directive
- The outcome of an action may be returned via the new target,
	allowing a previously issued command to recognise completion.
- A command is an action and a level of importance.
	An command with importance of `0` will be ignored;
	time need not be wasted providing a function which does nothing,
