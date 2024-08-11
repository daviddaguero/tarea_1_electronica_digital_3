#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    const char *name = "TZ"; // The name of the environment variable you want to set (in this case, "TZ" for the time zone).
    const char *timezone = "America/Argentina/Buenos_Aires";  // The value you want to assign to the environment variable (in this case, timezone).
    int overwrite = 1; // An integer that determines whether the environment variable should be overwritten if it already exists.
    setenv(name, timezone, overwrite);

    time_t now = time(NULL);
    struct tm *local = localtime(&now);

    printf("The current time in Argentina is:: %02d:%02d:%02d\n", local->tm_hour, local->tm_min, local->tm_sec);
}
