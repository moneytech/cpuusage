int      mq_close(mqd_t a);
int      mq_getattr(mqd_t a, struct mq_attr *b);
int      mq_notify(mqd_t a, const struct sigevent *b);
//unsupported (variable args): mqd_t    mq_open(const char *a, int b, ...);
ssize_t  mq_receive(mqd_t a, char *b, size_t c, unsigned *d);
int      mq_send(mqd_t a, const char *b, size_t c, unsigned d);
int      mq_setattr(mqd_t a, const struct mq_attr *restrict b, struct mq_attr *restrict c);
ssize_t  mq_timedreceive(mqd_t a, char *restrict b, size_t c, unsigned *restrict d, const struct timespec *restrict e);
int      mq_timedsend(mqd_t a, const char *b, size_t c, unsigned d, const struct timespec *e);
int      mq_unlink(const char *a);
