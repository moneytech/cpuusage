speed_t cfgetispeed(const struct termios *a);
speed_t cfgetospeed(const struct termios *a);
int     cfsetispeed(struct termios *a, speed_t b);
int     cfsetospeed(struct termios *a, speed_t b);
int     tcdrain(int a);
int     tcflow(int a, int b);
int     tcflush(int a, int b);
int     tcgetattr(int a, struct termios *b);
pid_t   tcgetsid(int a);
int     tcsendbreak(int a, int b);
int     tcsetattr(int a, int b, const struct termios *c);
