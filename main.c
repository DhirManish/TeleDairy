/* 
 * File:   main.c
 * Author: ajay
 *
 * Created on 23 June, 2014, 7:10 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv)
{
/* Check for OS and execute "clear screen" accordingly */
#if defined(__linux__)
    system("clear");
#elif defined(__WIN32__) || defined(__WIN64__)
    system("cls");
#endif

    return (EXIT_SUCCESS);
}

