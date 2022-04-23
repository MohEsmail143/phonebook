void modify_file(contact s[])
{
    int i, mod_choice, n=0, found=0;
    char target[15];
    printf("Please enter the last name of the entry to be modified: ");
    scanf("%s", target);
    for (i=0; i<count; i++)
    {
        if (strcasecmp(s[i].lastname, target)==0)
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
            if (strcasecmp(s[i].lastname, target)==0)
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
        printf("\nWhich entry would you like to modify?\n");
        scanf("%d", &mod_choice);
        int j= pos[mod_choice-1];
        int field_choice;
        do
        {
            printf("\nChoose the field you would like to edit:\n1- Last Name\n2- First Name\n3- Date of Birth\n4- Address\n5- E-mail\n6- Phone number\n7- Back to menu\n");
            printf("\nSelected field: ");
            do
            {
                scanf("%d", &field_choice);
                if (field_choice<1 || field_choice>7)
                    printf("Please enter correct number: ");
            }
            while (field_choice<1 || field_choice>7);
            switch(field_choice)
            {
            case 1:
                printf("Enter new last name: ");
                scanf("%s", s[j].lastname);
                break;
            case 2:
                printf("Enter new first name: ");
                scanf("%s", s[j].firstname);
                break;
            case 3:
                printf("Enter new birth date:\n");
                printf("Day: ");
                do
                {
                    scanf("%d", &s[j].dob.day);
                    if (s[j].dob.day <0 || s[j].dob.day>31)
                        printf("Please enter a valid number: ");
                }
                while (s[j].dob.day <0 || s[j].dob.day>31);
                printf("Month: ");
                do
                {
                    scanf("%d", &s[j].dob.month);
                    if (s[j].dob.month<0 || s[j].dob.month>12)
                        printf("Please enter a valid number: ");
                }
                while (s[j].dob.month<0 || s[j].dob.month>12);
                printf("Year: ");
                do
                {
                    scanf("%d", &s[j].dob.year);
                    if (s[j].dob.year<0)
                        printf("Please enter a valid number: ");
                }
                while (s[j].dob.year<0);
                break;
            case 4:
                printf("Enter new address: ");
                scanf("%s", s[j].adress);
                break;
            case 5:
                printf("Enter new e-mail: ");
                do
                {
                    scanf("%s", s[j].email);
                    if (validate_email(s[j].email)==1)
                        printf("Please enter a valid email: ");
                }
                while (validate_email(s[j].email)==1);
                break;
            case 6:
                printf("Enter new phone number: ");
                do
                {
                    scanf("%s", s[j].number);
                    if (validate_phone(s[j].number)==1)
                        printf("Please enter a valid phone number: ");
                }
                while(validate_phone(s[j].number)==1);
                break;
            case 7:
                break;
            }
        }
        while(field_choice!=7);
    }
    else
        printf("\nInput name was not found\n");
}
