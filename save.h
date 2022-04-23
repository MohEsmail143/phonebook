void save_file(contact s[])
{
    FILE *f;
    int i;
    f=fopen("telephone_book.txt", "w");
    for (i=0; i<count; i++)
    {
        fprintf(f,"%s,%s,%d-%d-%d,%s,%s,%s\n", s[i].lastname,s[i].firstname,s[i].dob.day,s[i].dob.month,s[i].dob.year, s[i].adress, s[i].email, s[i].number);
    }
    fclose(f);
}
