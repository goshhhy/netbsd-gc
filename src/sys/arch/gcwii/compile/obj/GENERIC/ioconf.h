
/* pseudo-devices */
void cpuctlattach(int);
void rndattach(int);
void ptyattach(int);
void loopattach(int);

/* driver structs */
extern struct cfdriver mainbus_cd;
extern struct cfdriver cpu_cd;
extern struct cfdriver usbgecko_cd;
