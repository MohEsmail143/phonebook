strcpy(temp.lastname,s[i].lastname);
strcpy(s[i].lastname, s[j].lastname);
strcpy(s[j].lastname, temp.lastname);

strcpy(temp.firstname,s[i].firstname);
strcpy(s[i].firstname, s[j].firstname);
strcpy(s[j].firstname, temp.firstname);

temp.dob.day=s[i].dob.day;
s[i].dob.day=s[j].dob.day;
s[j].dob.day=temp.dob.day;

temp.dob.month=s[i].dob.month;
s[i].dob.month=s[j].dob.month;
s[j].dob.month=temp.dob.month;

temp.dob.year=s[i].dob.year;
s[i].dob.year=s[j].dob.year;
s[j].dob.year=temp.dob.year;

strcpy(temp.adress,s[i].adress);
strcpy(s[i].adress, s[j].adress);
strcpy(s[j].adress, temp.adress);

strcpy(temp.email,s[i].email);
strcpy(s[i].email, s[j].email);
strcpy(s[j].email, temp.email);

strcpy(temp.number,s[i].number);
strcpy(s[i].number, s[j].number);
strcpy(s[j].number, temp.number);
