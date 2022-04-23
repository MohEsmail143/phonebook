void delete_file(contact s[])
{
    int i, delete_choice, n=0, found=0;
    char target_lastname[15],target_firstname[15];
    printf("Please enter the details of the entry to be deleted:\nLast Name: ");
    scanf("%s", target_lastname);
    printf("First Name: ");
    scanf("%s", target_firstname);
    for (i=0; i<count; i++)
    {
        if (strcasecmp(s[i].lastname, target_lastname)==0 && strcasecmp(s[i].firstname, target_firstname)==0)
        {
            n++;
            found=1;
        }
    }
    if (found==1)
    {
        int pos[n];
        int k=0;
        for (i=0; i<count; i++)
        {
            if (strcasecmp(s[i].lastname, target_lastname)==0 && strcasecmp(s[i].firstname, target_firstname)==0)
            {
                pos[k]=i;
                k++;
            }
        }
        printf("\nThe following entries were found:\n");
        for (i=0; i<n; i++)
        {
            printf("Contact [#%d]\n Last name: %s\n First name: %s\n ", i+1, s[pos[i]].lastname, s[pos[i]].firstname);
            printf("Date of Birth: %d-%d-%d\n ", s[pos[i]].dob.day, s[pos[i]].dob.month,s[pos[i]].dob.year);
            printf("Address: %s\n E-mail: %s\n Phone Number: %s\n\n", s[pos[i]].adress, s[pos[i]].email, s[pos[i]].number);
        }
        printf("\nWhich entry would you like to delete?\n");
        scanf("%d", &delete_choice);
        int j= pos[delete_choice-1];
        printf("\nThis entry has been deleted\n\n");
        for (i=j; i<count; i++)
        {
            strcpy(s[i].lastname, s[i+1].lastname);
            strcpy(s[i].firstname, s[i+1].firstname);
            s[i].dob.year=s[i+1].dob.year;
            s[i].dob.month=s[i+1].dob.month;
            s[i].dob.day=s[i+1].dob.day;
            strcpy(s[i].adress, s[i+1].adress);
            strcpy(s[i].email, s[i+1].email);
            strcpy(s[i].number, s[i+1].number);
        }
        count--;
    }
    else
        printf("\nInput name was not found\n");
}
