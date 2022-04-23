int validate_email(char s[])
{
    int i, j, found=0;
    for (i=0; i<strlen(s); i++)
    {
        if (s[i]=='@')
        {
            found=1;
            break;
        }
    }
    if (found==0)
        return 1;
    found=0;
    for (j=i; j<strlen(s); j++)
    {
        if (s[j]=='.')
            found=1;
    }
    if (found==0)
        return 1;
    else
        return 0;
}

int validate_phone(char s[])
{
    int i;
    if (strlen(s)>16)
        return 1;
    for (i=0; s[i]!='\0'; i++)
    {
        if (isalpha(s[i]) != 0 || (isalpha(s[i])==0 && isdigit(s[i])==0) )
            return 1;
    }
}
