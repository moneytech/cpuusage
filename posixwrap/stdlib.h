//unsupported (never returns): void          _Exit(int a);
long          a64l(const char *a);
//unsupported (never returns): void          abort(void);
int           abs(int a);
int           atexit(void (*a)(void));
double        atof(const char *a);
int           atoi(const char *a);
long          atol(const char *a);
long long     atoll(const char *a);
void         *bsearch(const void *a, const void *b, size_t c, size_t d, int (*e)(const void *, const void *));
void         *calloc(size_t a, size_t b);
div_t         div(int a, int b);
double        drand48(void);
double        erand48(unsigned short a[3]);
//unsupported (never returns): void          exit(int a);
void          free(void *a);
char         *getenv(const char *a);
int           getsubopt(char **a, char *const *b, char **c);
int           grantpt(int a);
char         *initstate(unsigned a, char *b, size_t c);
long          jrand48(unsigned short a[3]);
char         *l64a(long a);
long          labs(long a);
void          lcong48(unsigned short a[7]);
ldiv_t        ldiv(long a, long b);
long long     llabs(long long a);
lldiv_t       lldiv(long long a, long long b);
long          lrand48(void);
void         *malloc(size_t a);
int           mblen(const char *a, size_t b);
size_t        mbstowcs(wchar_t *restrict a, const char *restrict b, size_t c);
int           mbtowc(wchar_t *restrict a, const char *restrict b, size_t c);
char         *mkdtemp(char *a);
int           mkstemp(char *a);
long          mrand48(void);
long          nrand48(unsigned short a[3]);
int           posix_memalign(void **a, size_t b, size_t c);
int           posix_openpt(int a);
char         *ptsname(int a);
int           putenv(char *a);
void          qsort(void *a, size_t b, size_t c, int (*d)(const void *, const void *));
int           rand(void);
int           rand_r(unsigned *a);
long          random(void);
void         *realloc(void *a, size_t b);
char         *realpath(const char *restrict a, char *restrict b);
unsigned short *seed48(unsigned short a[3]);
int           setenv(const char *a, const char *b, int c);
void          setkey(const char *a);
char         *setstate(char *a);
void          srand(unsigned a);
void          srand48(long a);
void          srandom(unsigned a);
double        strtod(const char *restrict a, char **restrict b);
float         strtof(const char *restrict a, char **restrict b);
long          strtol(const char *restrict a, char **restrict b, int c);
long double   strtold(const char *restrict a, char **restrict b);
long long     strtoll(const char *restrict a, char **restrict b, int c);
unsigned long strtoul(const char *restrict a, char **restrict b, int c);
unsigned long long strtoull(const char *restrict a, char **restrict b, int c);
int           system(const char *a);
int           unlockpt(int a);
int           unsetenv(const char *a);
size_t        wcstombs(char *restrict a, const wchar_t *restrict b, size_t c);
int           wctomb(char *a, wchar_t b);
