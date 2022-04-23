void add_file(contact s[])
{
    int n,i,c=count;
    printf("How many contacts do you want to add?\n");
    scanf("%d",&n);
    for(i=c; i<(c+n); i++)
    {
        printf("\nContact [#%d]\n", i+1);
        printf(" Enter last name: ");
        scanf("%s",s[i].lastname);
        printf(" Enter first name: ");
        scanf("%s",s[i].firstname);
        printf(" Enter birth date:\n");
        printf("  Day: ");
        do
        {
            scanf("%d", &s[i].dob.day);
            if (s[i].dob.day <0 || s[i].dob.day>31)
                printf("  Please enter a valid number: ");
        }
        while (s[i].dob.day <0 || s[i].dob.day>31);
        printf("  Month: ");
        do
        {
            scanf("%d", &s[i].dob.month);
            if (s[i].dob.month<0 || s[i].dob.month>12)
                printf("  Please enter a valid number: ");
        }
        while (s[i].dob.month<0 || s[i].dob.month>12);
        printf("  Year: ");
        do
        {
            scanf("%d", &s[i].dob.year);
            if (s[i].dob.year<0)
                printf("  Please enter a valid number: ");
        }
        while (s[i].dob.year<0);
        printf(" Enter the address: ");
        fgets(s[i].adress, 50, stdin);
        printf(" Enter the email: ");
        do
        {
            scanf("%s",s[i].email);
            if (validate_email(s[i].email)==1)
                printf(" Please enter a valid email: ");
        }
        while (validate_email(s[i].email)==1);
        printf(" Enter the number: ");
        do
        {
            scanf("%s", s[i].number);
            if (validate_phone(s[i].number)==1)
                printf(" Please enter a valid phone number: ");
        }
        while(validate_phone(s[i].number)==1);
        count++;
    }
    printf("\n");
}
