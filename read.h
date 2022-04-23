void read_file(contact s[])
{
    FILE *f;
    f=fopen("telephone_book.txt","r");
    if (f != NULL)
    {
        count=0;
        while (!feof(f))
        {
            fscanf(f,"%[^,]%*c%[^,]%*c",s[count].lastname, s[count].firstname);
            fscanf(f,"%d-%d-%d,", &s[count].dob.day, &s[count].dob.month, &s[count].dob.year);
            fscanf(f,"%[^,]%*c%[^,]%*c%s\n", s[count].adress, s[count].email, s[count].number);
            count++;
        }
    }
    fclose(f);
}
