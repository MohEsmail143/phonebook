void search(contact s[])
{
    int x=0, i, found=0;
    char n[15];
    printf("Please enter the last name: ");
    scanf("%s", n);
    for (i=0; i<count; i++)
    {
        if (strcasecmp(s[i].lastname,n)==0)
        {
            found=1;
            x++;
        }
    }

    if (found==1)
    {
        int pos[x];
        int k=0;
        for (i=0; i<count; i++)
        {
            if (strcasecmp(s[i].lastname, n)==0)
            {
                pos[k]=i;
                k++;
            }
        }
        printf("\nThe following entries were found:\n");
        for (i=0; i<x; i++)
        {
            printf("Contact [#%d]\n Last name: %s\n First name: %s\n ", i+1, s[pos[i]].lastname, s[pos[i]].firstname);
            printf("Date of Birth: %d-%d-%d\n ", s[pos[i]].dob.day, s[pos[i]].dob.month,s[pos[i]].dob.year);
            printf("Address: %s\n E-mail: %s\n Phone Number: %s\n\n", s[pos[i]].adress, s[pos[i]].email, s[pos[i]].number);
        }
    }
    else
        printf("\nInput name not found\n");
}
