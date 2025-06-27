#include "main.h"

char *leet(char *str)
{
	void leet_convert(char *str)
{
    char *from = "aAeEoOtTlL";
    char *to   = "4433007711";

    int i = 0;
    while (str[i])
    {
        int j = 0;
        while (from[j])
        {
            if (str[i] == from[j]) {
                str[i] = to[j];
                break;
            }
            j++;
        }
        i++;
    }
}	
