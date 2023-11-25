#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int    main(void)
{
    int        fd;
    char    *res;

    fd = open("./gnlTester/files/43_with_nl", O_RDONLY);
    res = get_next_line(fd);
    printf("%s", res);
    while (res)
    {
        free(res);
        res = get_next_line(fd);
        printf("%s", res);
    }
    close(fd);
}
