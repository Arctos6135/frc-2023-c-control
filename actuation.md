# A note on actuation

This is in reference to the actuator in the shown in the included shematic.

The position of a 3 phase motor is determined by,
naturally, the relative currents through each coil.
Therefore, by tuning the 3 voltages shown,
a variety of angle behaviours can be achieved.
A voltage of 0 in signal 2 should, to properly use the `aim` function,
result in a howizontal motor position.

A motor which includes a generator *cannot*
be used in conjunction with this program.

The second motor referenced by the program is not in the diagram.
This is because it is a trivially straightforward circuit:
A *solenoid* should be connected directly to an amplified signal,
which is created directly from the controller area network.

It is reccommended that a custom built servo be used,
and that it's motion be amplified using with mechanical advantage.
