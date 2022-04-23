void print_file(contact s[])
{
    int i;
    printf("\n");
    for(i=0; i<count; i++)
    {
        printf("Contact [#%d]\n Last name: %s\n First name: %s\n ", i+1, s[i].lastname, s[i].firstname);
        printf("Date of Birth: %d-%d-%d\n ", s[i].dob.day, s[i].dob.month,s[i].dob.year);
        printf("Address: %s\n E-mail: %s\n Phone Number: %s\n\n", s[i].adress, s[i].email, s[i].number);
    }
}

void sort_Lname(contact s[])
{
    int i,j;
    contact temp;
    for (i=0; i<=count-1; i++)
    {
        for (j=i+1; j<=count-1; j++)
        {
            if (strcasecmp(s[i].lastname,s[j].lastname)==1)
            {
#include "swap_alg.h"
            }
        }
    }
    print_file(s);
}

void sort_DOB(contact s[])
{
    int i, j;
    contact temp;
    for (i=0; i<count; i++)
    {
        for (j=i+1; j<count; j++)
        {
            if (s[i].dob.year>s[j].dob.year)
            {
#include "swap_alg.h"
            }
            else if (s[i].dob.year==s[j].dob.year)
            {
                if (s[i].dob.month>s[j].dob.month)
                {
#include "swap_alg.h"
                }
                else if (s[i].dob.month==s[j].dob.month)
                {
                    if (s[i].dob.day>s[j].dob.day)
                    {
#include "swap_alg.h"
                    }
                }
            }
        }
    }
    print_file(s);
}
