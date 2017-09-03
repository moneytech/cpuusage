#include <wctype.h>
wint_t        btowc(int a);
wint_t        fgetwc(FILE *a);
wchar_t      *fgetws(wchar_t *restrict a, int b, FILE *restrict c);
wint_t        fputwc(wchar_t a, FILE *b);
int           fputws(const wchar_t *restrict a, FILE *restrict b);
int           fwide(FILE *a, int b);
int           fwprintf(FILE *restrict a, const wchar_t *restrict b, ...);
int           fwscanf(FILE *restrict a, const wchar_t *restrict b, ...);
wint_t        getwc(FILE *a);
wint_t        getwchar(void);
int           iswalnum(wint_t a);
int           iswalpha(wint_t a);
int           iswcntrl(wint_t a);
int           iswctype(wint_t a, wctype_t b);
int           iswdigit(wint_t a);
int           iswgraph(wint_t a);
int           iswlower(wint_t a);
int           iswprint(wint_t a);
int           iswpunct(wint_t a);
int           iswspace(wint_t a);
int           iswupper(wint_t a);
int           iswxdigit(wint_t a);
size_t        mbrlen(const char *restrict a, size_t b, mbstate_t *restrict c);
size_t        mbrtowc(wchar_t *restrict a, const char *restrict b, size_t c, mbstate_t *restrict d);
int           mbsinit(const mbstate_t *a);
size_t        mbsnrtowcs(wchar_t *restrict a, const char **restrict b, size_t c, size_t d, mbstate_t *restrict e);
size_t        mbsrtowcs(wchar_t *restrict a, const char **restrict b, size_t c, mbstate_t *restrict d);
FILE         *open_wmemstream(wchar_t **a, size_t *b);
wint_t        putwc(wchar_t a, FILE *b);
wint_t        putwchar(wchar_t a);
int           swprintf(wchar_t *restrict a, size_t b, const wchar_t *restrict c, ...);
int           swscanf(const wchar_t *restrict a, const wchar_t *restrict b, ...);
wint_t        towlower(wint_t a);
wint_t        towupper(wint_t a);
wint_t        ungetwc(wint_t a, FILE *b);
int           vfwprintf(FILE *restrict a, const wchar_t *restrict b, va_list c);
int           vfwscanf(FILE *restrict a, const wchar_t *restrict b, va_list c);
int           vswprintf(wchar_t *restrict a, size_t b, const wchar_t *restrict c, va_list d);
int           vswscanf(const wchar_t *restrict a, const wchar_t *restrict b, va_list c);
int           vwprintf(const wchar_t *restrict a, va_list b);
int           vwscanf(const wchar_t *restrict a, va_list b);
wchar_t      *wcpcpy(wchar_t *restrict a, const wchar_t *restrict b);
wchar_t      *wcpncpy(wchar_t *restrict a, const wchar_t *restrict b, size_t c);
size_t        wcrtomb(char *restrict a, wchar_t b, mbstate_t *restrict c);
int           wcscasecmp(const wchar_t *a, const wchar_t *b);
int           wcscasecmp_l(const wchar_t *a, const wchar_t *b, locale_t c);
wchar_t      *wcscat(wchar_t *restrict a, const wchar_t *restrict b);
wchar_t      *wcschr(const wchar_t *a, wchar_t b);
int           wcscmp(const wchar_t *a, const wchar_t *b);
int           wcscoll(const wchar_t *a, const wchar_t *b);
int           wcscoll_l(const wchar_t *a, const wchar_t *b, locale_t c);
wchar_t      *wcscpy(wchar_t *restrict a, const wchar_t *restrict b);
size_t        wcscspn(const wchar_t *a, const wchar_t *b);
wchar_t      *wcsdup(const wchar_t *a);
size_t        wcsftime(wchar_t *restrict a, size_t b, const wchar_t *restrict c, const struct tm *restrict d);
size_t        wcslen(const wchar_t *a);
int           wcsncasecmp(const wchar_t *a, const wchar_t *b, size_t c);
int           wcsncasecmp_l(const wchar_t *a, const wchar_t *b, size_t c, locale_t d);
wchar_t      *wcsncat(wchar_t *restrict a, const wchar_t *restrict b, size_t c);
int           wcsncmp(const wchar_t *a, const wchar_t *b, size_t c);
wchar_t      *wcsncpy(wchar_t *restrict a, const wchar_t *restrict b, size_t c);
size_t        wcsnlen(const wchar_t *a, size_t b);
size_t        wcsnrtombs(char *restrict a, const wchar_t **restrict b, size_t c, size_t d, mbstate_t *restrict e);
wchar_t      *wcspbrk(const wchar_t *a, const wchar_t *b);
wchar_t      *wcsrchr(const wchar_t *a, wchar_t b);
size_t        wcsrtombs(char *restrict a, const wchar_t **restrict b, size_t c, mbstate_t *restrict d);
size_t        wcsspn(const wchar_t *a, const wchar_t *b);
wchar_t      *wcsstr(const wchar_t *restrict a, const wchar_t *restrict b);
double        wcstod(const wchar_t *restrict a, wchar_t **restrict b);
float         wcstof(const wchar_t *restrict a, wchar_t **restrict b);
wchar_t      *wcstok(wchar_t *restrict a, const wchar_t *restrict b, wchar_t **restrict c);
long          wcstol(const wchar_t *restrict a, wchar_t **restrict b, int c);
long double   wcstold(const wchar_t *restrict a, wchar_t **restrict b);
long long     wcstoll(const wchar_t *restrict a, wchar_t **restrict b, int c);
unsigned long wcstoul(const wchar_t *restrict a, wchar_t **restrict b, int c);
unsigned long long wcstoull(const wchar_t *restrict a, wchar_t **restrict b, int c);
int           wcswidth(const wchar_t *a, size_t b);
size_t        wcsxfrm(wchar_t *restrict a, const wchar_t *restrict b, size_t c);
size_t        wcsxfrm_l(wchar_t *restrict a, const wchar_t *restrict b, size_t c, locale_t d);
int           wctob(wint_t a);
wctype_t      wctype(const char *a);
int           wcwidth(wchar_t a);
wchar_t      *wmemchr(const wchar_t *a, wchar_t b, size_t c);
int           wmemcmp(const wchar_t *a, const wchar_t *b, size_t c);
wchar_t      *wmemcpy(wchar_t *restrict a, const wchar_t *restrict b, size_t c);
wchar_t      *wmemmove(wchar_t *a, const wchar_t *b, size_t c);
wchar_t      *wmemset(wchar_t *a, wchar_t b, size_t c);
int           wprintf(const wchar_t *restrict a, ...);
int           wscanf(const wchar_t *restrict a, ...);
