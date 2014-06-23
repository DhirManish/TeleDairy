/* 
 * File:   main.c
 * Author: ajay
 *
 * Created on 23 June, 2014, 7:50 PM
 */

#include <stdio.h>
#include "telecore.h"

int display_menu()
{
    printf("\t\t\t%s\n", "MENU");
    printf("\t\t\t%s\n", "====");
    printf("\t\t%s\n", "1. Add an entry");
    printf("\t\t%s\n", "2. Remove an entry");
    printf("\t\t%s\n", "3. Edit an entry");
    printf("\t\t%s\n", "4. Display an entry"); 
    printf("\t\t%s\n", "5. Exit");    
}