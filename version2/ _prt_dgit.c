#include "main.h"



int _prt_dgt(va_list *args)
{
    int n = va_arg(*args, int);
    int rc = 0;
    int i = n;
    int j = 1;

    if (i < 0){
        i *= -1;
    }

    while (i > 0){
        i /= 10;
        rc++;
    }

    if (n < 0){
        _putchar('-');
        rc++;
        j = n % 10;
        n = n / -10;
        
    } else if (n == 0)
    {
        _putchar('0');
        return (rc);
    }
   _get_digts(n);
    if (j < 0){
        _putchar('0' - j);

    }
    return (rc);

}