#include <stdio.h>
#include <string.h>
int main() {
    int hh, mm, ss ;
    char meridian[2];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, meridian);

    if (strcmp(meridian,"PM")==0 && hh!=12) hh +=12;
    if (strcmp(meridian,"pm")==0 && hh!=12) hh +=12;
    if (strcmp(meridian,"AM")==0 && hh==12) hh =0;
    if (strcmp(meridian,"am")==0 && hh==12) hh =0;

    printf("%02d:%02d:%02d", hh, mm, ss) ;
    return 0;
}
