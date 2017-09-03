char      *asctime(const struct tm *a);
char      *asctime_r(const struct tm *restrict a, char *restrict b);
clock_t    clock(void);
int        clock_getcpuclockid(pid_t a, clockid_t *b);
int        clock_getres(clockid_t a, struct timespec *b);
int        clock_gettime(clockid_t a, struct timespec *b);
int        clock_nanosleep(clockid_t a, int b, const struct timespec *c, struct timespec *d);
int        clock_settime(clockid_t a, const struct timespec *b);
char      *ctime(const time_t *a);
char      *ctime_r(const time_t *a, char *b);
double     difftime(time_t a, time_t b);
struct tm *getdate(const char *a);
struct tm *gmtime(const time_t *a);
struct tm *gmtime_r(const time_t *restrict a, struct tm *restrict b);
struct tm *localtime(const time_t *a);
struct tm *localtime_r(const time_t *restrict a, struct tm *restrict b);
time_t     mktime(struct tm *a);
int        nanosleep(const struct timespec *a, struct timespec *b);
size_t     strftime(char *restrict a, size_t b, const char *restrict c, const struct tm *restrict d);
size_t     strftime_l(char *restrict a, size_t b, const char *restrict c, const struct tm *restrict d, locale_t e);
char      *strptime(const char *restrict a, const char *restrict b, struct tm *restrict c);
time_t     time(time_t *a);
int        timer_create(clockid_t a, struct sigevent *restrict b, timer_t *restrict c);
int        timer_delete(timer_t a);
int        timer_getoverrun(timer_t a);
int        timer_gettime(timer_t a, struct itimerspec *b);
int        timer_settime(timer_t a, int b, const struct itimerspec *restrict c, struct itimerspec *restrict d);
void       tzset(void);
