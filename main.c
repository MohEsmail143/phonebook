#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "struct.h"
#include "validate.h"
#include "read.h"
#include "search.h"
#include "add.h"
#include "delete.h"
#include "modify.h"
#include "sort.h"
#include "save.h"
#include "quit.h"

int main()
{
    int action_no, sort_type;
    printf("    ****************     \n");
    printf("WELCOME TO PHONE DIRECTORY!");
    printf("\n    ****************\n");
    read_file(person);
    do
    {
        printf("----------------------------------------------");
        printf("\nPlease select one of the following actions:\n");
        printf("1- Search\n2- Add entries\n3- Delete an entry\n4- Modify an entry\n5- Print directory\n6- Save changes\n7- Exit\n");
        printf("\nSelected action: ");
        do
        {
            scanf("%d", &action_no);
            if (action_no<1 || action_no>8)
                printf("Please enter correct number: ");
        }
        while (action_no<1 || action_no>8);
        switch(action_no)
        {
        case 1:
            search(person);
            break;
        case 2:
            add_file(person);
            save_flag=0;
            break;
        case 3:
            delete_file(person);
            save_flag=0;
            break;
        case 4:
            modify_file(person);
            save_flag=0;
            break;
        case 5:
            printf("Sort by:\n1- Last Name\n2- Date of Birth\n\n");
            do
            {
                printf("Sort method: ");
                scanf("%d", &sort_type);
                if (sort_type!=1 && sort_type!=2)
                    printf("Please enter correct number: \n");
            }
            while(sort_type!=1 && sort_type!=2);
            if (sort_type==1)
                sort_Lname(person);
            else if (sort_type==2)
                sort_DOB(person);
            save_flag=0;
            break;
        case 6:
            save_file(person);
            printf("Changes saved successfully!\n\n");
            save_flag=1;
            break;
        case 7:
            quit();
        }
    }
    while(exit_choice!=1);

    return 0;
}
