/* 
 * File:   main.c
 * Author: ajay
 *
 * Created on 23 June, 2014, 7:50 PM
 */

#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include "telecore.h"

/* Check for OS and execute "clear screen" accordingly */
void clrscr(void)
{
#if defined(__linux__)
    system("clear");
#elif defined(__WIN32__) || defined(__WIN64__)
    system("cls");
#endif
}

/* reads from keypress, echoes */
int getche(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

int display_menu(void)
{
    printf("\t\t\t%s\n", "MENU");
    printf("\t\t\t%s\n", "====");
    printf("\t\t%s\n", "1. Add an entry");
    printf("\t\t%s\n", "2. Remove an entry");
    printf("\t\t%s\n", "3. Edit an entry");
    printf("\t\t%s\n", "4. Display an entry"); 
    printf("\t\t%s\n", "5. Exit");
    printf("\t%30s", "Choose your option(1-5): ");
    
    return getche();
}