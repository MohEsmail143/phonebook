#define SIZE 100

typedef struct
{
    int day, month, year;
} date;

typedef struct
{
    char lastname[15], firstname[15], adress[50], email[30], number[20];
    date dob;
} contact;

contact person[SIZE];
int count=0, exit_choice=0, save_flag=1;
